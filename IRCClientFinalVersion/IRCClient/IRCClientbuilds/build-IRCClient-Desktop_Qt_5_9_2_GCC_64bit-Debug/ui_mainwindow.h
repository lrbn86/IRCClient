/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *Connection;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_5;
    QLabel *hostnameLabel;
    QLineEdit *hostnameInput;
    QLabel *portLabel;
    QLineEdit *portInput;
    QPushButton *connectButton;
    QWidget *Main_Menu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Login_Existing_User_Button;
    QPushButton *Create_New_Account_Button;
    QWidget *Create_New_User_Interface;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameInput;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QPushButton *registerButton;
    QPushButton *cancelButton;
    QWidget *Login_Existing_User_Interface;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *usernameLabel_2;
    QLineEdit *usernameInput_2;
    QLabel *passwordLabel_2;
    QLineEdit *passwordInput_2;
    QPushButton *loginButton;
    QPushButton *cancelButton_2;
    QWidget *Chat_Interface;
    QPushButton *leaveRoomButton;
    QPushButton *sendMessageButton;
    QListWidget *messageList;
    QListWidget *userList;
    QListWidget *roomList;
    QLabel *Users;
    QLabel *Rooms;
    QListWidget *usersInRoomList;
    QLabel *usersInRoomLabel;
    QPushButton *createRoomButton;
    QLineEdit *messageInput;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 480));
        MainWindow->setMaximumSize(QSize(600, 480));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 581, 451));
        Connection = new QWidget();
        Connection->setObjectName(QStringLiteral("Connection"));
        formLayoutWidget_3 = new QWidget(Connection);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 150, 591, 98));
        formLayout_5 = new QFormLayout(formLayoutWidget_3);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(0, 10, 10, 0);
        hostnameLabel = new QLabel(formLayoutWidget_3);
        hostnameLabel->setObjectName(QStringLiteral("hostnameLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, hostnameLabel);

        hostnameInput = new QLineEdit(formLayoutWidget_3);
        hostnameInput->setObjectName(QStringLiteral("hostnameInput"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, hostnameInput);

        portLabel = new QLabel(formLayoutWidget_3);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, portLabel);

        portInput = new QLineEdit(formLayoutWidget_3);
        portInput->setObjectName(QStringLiteral("portInput"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, portInput);

        connectButton = new QPushButton(formLayoutWidget_3);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, connectButton);

        stackedWidget->addWidget(Connection);
        Main_Menu = new QWidget();
        Main_Menu->setObjectName(QStringLiteral("Main_Menu"));
        verticalLayoutWidget = new QWidget(Main_Menu);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-10, 150, 601, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Login_Existing_User_Button = new QPushButton(verticalLayoutWidget);
        Login_Existing_User_Button->setObjectName(QStringLiteral("Login_Existing_User_Button"));
        Login_Existing_User_Button->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Login_Existing_User_Button, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        Create_New_Account_Button = new QPushButton(verticalLayoutWidget);
        Create_New_Account_Button->setObjectName(QStringLiteral("Create_New_Account_Button"));
        Create_New_Account_Button->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Create_New_Account_Button, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        stackedWidget->addWidget(Main_Menu);
        Create_New_User_Interface = new QWidget();
        Create_New_User_Interface->setObjectName(QStringLiteral("Create_New_User_Interface"));
        formLayoutWidget = new QWidget(Create_New_User_Interface);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 150, 591, 98));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 10, 10, 0);
        usernameLabel = new QLabel(formLayoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        usernameInput = new QLineEdit(formLayoutWidget);
        usernameInput->setObjectName(QStringLiteral("usernameInput"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameInput);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordInput = new QLineEdit(formLayoutWidget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordInput);

        registerButton = new QPushButton(formLayoutWidget);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, registerButton);

        cancelButton = new QPushButton(formLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cancelButton);

        stackedWidget->addWidget(Create_New_User_Interface);
        Login_Existing_User_Interface = new QWidget();
        Login_Existing_User_Interface->setObjectName(QStringLiteral("Login_Existing_User_Interface"));
        formLayoutWidget_2 = new QWidget(Login_Existing_User_Interface);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 150, 591, 98));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 10, 10, 0);
        usernameLabel_2 = new QLabel(formLayoutWidget_2);
        usernameLabel_2->setObjectName(QStringLiteral("usernameLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, usernameLabel_2);

        usernameInput_2 = new QLineEdit(formLayoutWidget_2);
        usernameInput_2->setObjectName(QStringLiteral("usernameInput_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, usernameInput_2);

        passwordLabel_2 = new QLabel(formLayoutWidget_2);
        passwordLabel_2->setObjectName(QStringLiteral("passwordLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, passwordLabel_2);

        passwordInput_2 = new QLineEdit(formLayoutWidget_2);
        passwordInput_2->setObjectName(QStringLiteral("passwordInput_2"));
        passwordInput_2->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwordInput_2);

        loginButton = new QPushButton(formLayoutWidget_2);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, loginButton);

        cancelButton_2 = new QPushButton(formLayoutWidget_2);
        cancelButton_2->setObjectName(QStringLiteral("cancelButton_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, cancelButton_2);

        stackedWidget->addWidget(Login_Existing_User_Interface);
        Chat_Interface = new QWidget();
        Chat_Interface->setObjectName(QStringLiteral("Chat_Interface"));
        leaveRoomButton = new QPushButton(Chat_Interface);
        leaveRoomButton->setObjectName(QStringLiteral("leaveRoomButton"));
        leaveRoomButton->setEnabled(false);
        leaveRoomButton->setGeometry(QRect(0, 380, 111, 71));
        leaveRoomButton->setFocusPolicy(Qt::NoFocus);
        sendMessageButton = new QPushButton(Chat_Interface);
        sendMessageButton->setObjectName(QStringLiteral("sendMessageButton"));
        sendMessageButton->setEnabled(false);
        sendMessageButton->setGeometry(QRect(470, 420, 111, 31));
        sendMessageButton->setFocusPolicy(Qt::NoFocus);
        messageList = new QListWidget(Chat_Interface);
        messageList->setObjectName(QStringLiteral("messageList"));
        messageList->setGeometry(QRect(0, 130, 581, 241));
        messageList->setFocusPolicy(Qt::NoFocus);
        userList = new QListWidget(Chat_Interface);
        userList->setObjectName(QStringLiteral("userList"));
        userList->setGeometry(QRect(0, 30, 231, 91));
        userList->setFocusPolicy(Qt::NoFocus);
        userList->setSelectionMode(QAbstractItemView::SingleSelection);
        roomList = new QListWidget(Chat_Interface);
        roomList->setObjectName(QStringLiteral("roomList"));
        roomList->setGeometry(QRect(240, 30, 171, 91));
        roomList->setFocusPolicy(Qt::NoFocus);
        Users = new QLabel(Chat_Interface);
        Users->setObjectName(QStringLiteral("Users"));
        Users->setGeometry(QRect(0, 10, 121, 16));
        Rooms = new QLabel(Chat_Interface);
        Rooms->setObjectName(QStringLiteral("Rooms"));
        Rooms->setGeometry(QRect(240, 10, 59, 16));
        usersInRoomList = new QListWidget(Chat_Interface);
        usersInRoomList->setObjectName(QStringLiteral("usersInRoomList"));
        usersInRoomList->setGeometry(QRect(420, 30, 161, 91));
        usersInRoomList->setFocusPolicy(Qt::NoFocus);
        usersInRoomLabel = new QLabel(Chat_Interface);
        usersInRoomLabel->setObjectName(QStringLiteral("usersInRoomLabel"));
        usersInRoomLabel->setGeometry(QRect(420, 10, 101, 16));
        createRoomButton = new QPushButton(Chat_Interface);
        createRoomButton->setObjectName(QStringLiteral("createRoomButton"));
        createRoomButton->setGeometry(QRect(110, 380, 111, 71));
        createRoomButton->setFocusPolicy(Qt::NoFocus);
        messageInput = new QLineEdit(Chat_Interface);
        messageInput->setObjectName(QStringLiteral("messageInput"));
        messageInput->setEnabled(false);
        messageInput->setGeometry(QRect(240, 380, 341, 31));
        stackedWidget->addWidget(Chat_Interface);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IRC Client", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        hostnameLabel->setText(QApplication::translate("MainWindow", "Hostname:", Q_NULLPTR));
        portLabel->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        Login_Existing_User_Button->setText(QApplication::translate("MainWindow", "Login to Existing User", Q_NULLPTR));
        Create_New_Account_Button->setText(QApplication::translate("MainWindow", "Create a New Account", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        registerButton->setText(QApplication::translate("MainWindow", "Register", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        usernameLabel_2->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        passwordLabel_2->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        loginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        cancelButton_2->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        leaveRoomButton->setText(QApplication::translate("MainWindow", "Leave Room", Q_NULLPTR));
        sendMessageButton->setText(QApplication::translate("MainWindow", "Send message", Q_NULLPTR));
        Users->setText(QApplication::translate("MainWindow", "Connected Users:", Q_NULLPTR));
        Rooms->setText(QApplication::translate("MainWindow", "Rooms:", Q_NULLPTR));
        usersInRoomLabel->setText(QApplication::translate("MainWindow", "Users in Room:", Q_NULLPTR));
        createRoomButton->setText(QApplication::translate("MainWindow", "Create Room", Q_NULLPTR));
        messageInput->setPlaceholderText(QApplication::translate("MainWindow", "Begin typing here.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
