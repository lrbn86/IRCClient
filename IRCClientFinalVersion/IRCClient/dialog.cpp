#include "dialog.h"
#include "ui_dialog.h"
#include "model.h"
#include <string>
#include <iostream>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_createRoomButton_clicked()
{
    std::string roomName = ui->roomNameInput->displayText().toStdString();
    std::string command = "CREATE-ROOM " + model_username + " " + model_password + " " + roomName;
    sendCommand(model_hostname, model_port, const_cast<char*>(command.c_str()), model_response);
    // TODO Update roomList
    ui->roomNameInput->clear();
    close();
}

void Dialog::on_cancelButton_clicked()
{
    ui->roomNameInput->clear();
    close();
}
