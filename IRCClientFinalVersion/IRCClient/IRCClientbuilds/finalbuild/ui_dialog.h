/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *roomNameInput;
    QPushButton *cancelButton;
    QLabel *roomNameLabel;
    QPushButton *createRoomButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(320, 240);
        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 301, 83));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        roomNameInput = new QLineEdit(formLayoutWidget);
        roomNameInput->setObjectName(QStringLiteral("roomNameInput"));

        formLayout->setWidget(0, QFormLayout::FieldRole, roomNameInput);

        cancelButton = new QPushButton(formLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cancelButton);

        roomNameLabel = new QLabel(formLayoutWidget);
        roomNameLabel->setObjectName(QStringLiteral("roomNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, roomNameLabel);

        createRoomButton = new QPushButton(formLayoutWidget);
        createRoomButton->setObjectName(QStringLiteral("createRoomButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, createRoomButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Dialog", "Cancel", Q_NULLPTR));
        roomNameLabel->setText(QApplication::translate("Dialog", "Room Name:", Q_NULLPTR));
        createRoomButton->setText(QApplication::translate("Dialog", "Create room", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
