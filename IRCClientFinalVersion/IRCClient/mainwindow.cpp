#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "network.h"
#include <string>
#include <string.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateClient()));
    statusBar()->showMessage("  Welcome to the IRC client! Please enter a valid hostname and a valid port number.");
}

MainWindow::~MainWindow() {
    delete ui;
}

/*
 Indexes
    0: Connection menu
    1: Main Menu page
    2: Create new account page
    3: Login to existing account page
    4: Chat interface page
 */
void MainWindow::updateClient() {
    // This function will send a command for:
    // * GET-ALL-USERS
    // * LIST-ROOMS
    // * GET-USERS-IN-ROOM
    // * GET-MESSAGES
    // Call this method every 5 seconds...
    ui->roomList->clear();
    ui->usersInRoomList->clear();
    ui->userList->clear();
    ui->messageList->clear();
    std::string command = "GET-ALL-USERS " + model_username + " " + model_password;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    // Separate response by '\r\n' delimiter
    char *token;
    for (token = strtok(model_response, "\r\n"); token != NULL; token = strtok(NULL, "\r\n")) {
        ui->userList->addItem(token);
    }
    command = "LIST-ROOMS " + model_username + " " + model_password;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    for (token = strtok(model_response, "\r\n"); token != NULL; token = strtok(NULL, "\r\n")) {
        ui->roomList->addItem(token);
    }
    // GET-MESSAGES follows the same routine as GET-USERS-IN-ROOM
    if (!model_roomName.empty()) {
        command = "GET-USERS-IN-ROOM " + model_username + " " + model_password + " " + model_roomName;
        sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
        // update users in room list
        for (token = strtok(model_response, "\r\n"); token != NULL; token = strtok(NULL, "\r\n")) {
            ui->usersInRoomList->addItem(token);
        }
        command = "GET-MESSAGES " + model_username + " " + model_password + " " + "-1" + " " + model_roomName;
        sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
        // update users in room list
        for (token = strtok(model_response, "\r\n"); token != NULL; token = strtok(NULL, "\r\n")) {  
            ui->messageList->addItem(token);
        }
        ui->messageList->scrollToBottom();
    }

}

void MainWindow::on_Create_New_Account_Button_clicked() {
    ui->stackedWidget->setCurrentIndex(2);
    statusBar()->showMessage("  Creating a new account...");
}

void MainWindow::on_cancelButton_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
    ui->usernameInput->clear();
    ui->passwordInput->clear();
    statusBar()->showMessage("  Select the following options.");
}

void MainWindow::on_cancelButton_2_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
    ui->usernameInput_2->clear();
    ui->passwordInput_2->clear();
    statusBar()->showMessage("  Select the following options.");
}

void MainWindow::on_Login_Existing_User_Button_clicked() {
    ui->stackedWidget->setCurrentIndex(3);
    statusBar()->showMessage("  Logging on to existing account...");
}

void MainWindow::on_registerButton_clicked() {
    model_username = ui->usernameInput->displayText().toStdString();
    model_password = ui->passwordInput->displayText().toStdString();
    if (model_username.empty() || model_password.empty()) {
        statusBar()->showMessage(" Username or password was not provided. Please try again.");
    } else {
        std::string command ="ADD-USER " + model_username + " " + model_password;
        sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
        ui->stackedWidget->setCurrentIndex(4);
        updateClient();
        setWindowTitle("IRC Client [" + QString::fromStdString(model_username) + "]");
        statusBar()->showMessage("  Welcome! Join a room & say hello!", 5000);
    }
}

void MainWindow::on_loginButton_clicked() {
    // Verify account information before letting user into the chat interface.
    // Use GET-ALL-USERS command to verify and initialize a list
    model_username = ui->usernameInput_2->displayText().toStdString();
    ui->passwordInput_2->setEchoMode(QLineEdit::Normal);
    model_password = ui->passwordInput_2->displayText().toStdString();
    if (model_username.empty() || model_password.empty()) {
         ui->passwordInput_2->setEchoMode(QLineEdit::Password);
        statusBar()->showMessage("  Username or password was not provided. Please try again.");
    } else {
        std::string command = "GET-ALL-USERS " + model_username + " " + model_password;
        sendCommand(model_hostname, model_port,const_cast<char*>(command.c_str()), model_response);
        if (strcmp(model_response, "ERROR (Wrong password)\r\n") == 0) {
            ui->passwordInput_2->setEchoMode(QLineEdit::Password);
            statusBar()->showMessage("  This user does not exist in our database. Please try again or register a new account.");
        } else {

            ui->stackedWidget->setCurrentIndex(4);
            updateClient();
            setWindowTitle("IRC Client [" + QString::fromStdString(model_username) + "]");
            statusBar()->showMessage("  Welcome back! Join a room & say hello!", 5000);
        }
    }
}

void MainWindow::on_connectButton_clicked() {
    // TODO When a user exits the app, the connected users are still 'connected'
    // Check that the fields are not empty
    if (ui->hostnameInput->displayText().isEmpty() || ui->portInput->displayText().isEmpty()) {
       statusBar()->showMessage("  Please enter both a valid hostname and a valid port number before connecting.");
    } else {
        // Check that the portInput is an integer.
        if (ui->portInput->displayText().toInt() == 0) {
            statusBar()->showMessage("  Please enter an integer value into the port number field.");
        } else {
            statusBar()->showMessage("  Select the following options.");
           // Switch to MainMenu page
            ui->stackedWidget->setCurrentIndex(1);
            // Extract input fields and save into model
            std::string hostName = ui->hostnameInput->displayText().toStdString();
            char * hostname = new char[hostName.length()];
            strcpy(hostname, hostName.c_str());
            model_hostname = hostname;
            int portNum = ui->portInput->displayText().toInt();
            model_port = portNum;
            // Once connected to server, start updating client.
            timer->start(5000);
        }
    }
}

void MainWindow::on_createRoomButton_clicked() {
    diag.setModal(true);
    diag.exec();
    updateClient();
}

void MainWindow::on_leaveRoomButton_clicked()
{
    std::string command = "SEND-MESSAGE " + model_username + " " + model_password + " " + model_roomName + " has left the room.";
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    command = "GET-MESSAGES " + model_username + " " + model_password + " " + "-1" + " " + model_roomName;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    // update users in room list
    char *token;
    for (token = strtok(model_response, "\r\n"); token != NULL; token = strtok(NULL, "\r\n")) {
        ui->messageList->addItem(token);
    }
    // leave room command here
    command = "LEAVE-ROOM " + model_username + " " + model_password + " " + model_roomName;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    statusBar()->showMessage("  Left: " + QString::fromStdString(model_roomName), 3000);
    model_roomName.clear();
    // clear users in room list
    ui->usersInRoomList->clear();
    ui->sendMessageButton->setEnabled(false);
    ui->leaveRoomButton->setEnabled(false);
    ui->messageInput->setEnabled(false);
    updateClient();
}

void MainWindow::on_sendMessageButton_clicked()
{
    std::string message = ui->messageInput->displayText().toStdString();
    std::string command = "SEND-MESSAGE " + model_username + " " + model_password + " " + model_roomName + " " + message;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    ui->messageInput->clear();
    updateClient();
}

void MainWindow::on_roomList_itemClicked(QListWidgetItem *item)
{
    // enter room command here
    // TODO clicking on roomName twice will send message again and again...
    std::string roomName = item->text().toStdString();
    model_roomName = roomName;
    std::string command = "ENTER-ROOM " + model_username + " " + model_password + " " + roomName;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    ui->leaveRoomButton->setEnabled(true);
    ui->sendMessageButton->setEnabled(true);
    ui->messageInput->setEnabled(true);
    command = "SEND-MESSAGE " + model_username + " " + model_password + " " + roomName + " has entered the room.";
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    // get users in room
    command = "GET-USERS-IN-ROOM " + model_username + " " + model_password + " " + roomName;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    statusBar()->showMessage("  Current Room: " + item->text());
    updateClient();
}

void MainWindow::on_messageInput_returnPressed()
{
    std::string message = ui->messageInput->displayText().toStdString();
    std::string command = "SEND-MESSAGE " + model_username + " " + model_password + " " + model_roomName + " " + message;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    ui->messageInput->clear();
    updateClient();
}
