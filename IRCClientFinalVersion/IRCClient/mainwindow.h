#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QListWidgetItem>
#include "dialog.h"
#include "model.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    // This function will send a command for:
    // * GET-ALL-USERS
    // * LIST-ROOMS
    // * GET-USERS-IN-ROOM
    // * GET-MESSAGES
    // Call this method every 2 seconds...
    void updateClient();

    void on_Create_New_Account_Button_clicked();

    void on_cancelButton_clicked();

    void on_cancelButton_2_clicked();

    void on_Login_Existing_User_Button_clicked();

    void on_registerButton_clicked();

    void on_loginButton_clicked();

    void on_connectButton_clicked();

    void on_createRoomButton_clicked();

    void on_leaveRoomButton_clicked();

    void on_sendMessageButton_clicked();

    void on_roomList_itemClicked(QListWidgetItem *item);

    void on_messageInput_returnPressed();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    Dialog diag;
};

#endif // MAINWINDOW_H
