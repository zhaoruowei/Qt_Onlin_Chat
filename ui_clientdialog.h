/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *MssageEdit;
    QPushButton *SendButton;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *HostEdit;
    QLabel *label_2;
    QLineEdit *PortEdit;
    QLabel *label_3;
    QLineEdit *UserEdit;
    QPushButton *ConnectButton;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QString::fromUtf8("ClientDialog"));
        ClientDialog->resize(390, 700);
        verticalLayout = new QVBoxLayout(ClientDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ClientDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFrameShape(QFrame::Box);
        listWidget->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MssageEdit = new QLineEdit(ClientDialog);
        MssageEdit->setObjectName(QString::fromUtf8("MssageEdit"));

        horizontalLayout->addWidget(MssageEdit);

        SendButton = new QPushButton(ClientDialog);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        SendButton->setEnabled(false);

        horizontalLayout->addWidget(SendButton);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ClientDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        HostEdit = new QLineEdit(ClientDialog);
        HostEdit->setObjectName(QString::fromUtf8("HostEdit"));

        gridLayout->addWidget(HostEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        PortEdit = new QLineEdit(ClientDialog);
        PortEdit->setObjectName(QString::fromUtf8("PortEdit"));

        gridLayout->addWidget(PortEdit, 1, 1, 1, 1);

        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        UserEdit = new QLineEdit(ClientDialog);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));

        gridLayout->addWidget(UserEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        ConnectButton = new QPushButton(ClientDialog);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));

        verticalLayout->addWidget(ConnectButton);


        retranslateUi(ClientDialog);

        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QCoreApplication::translate("ClientDialog", "TalkClient", nullptr));
        SendButton->setText(QCoreApplication::translate("ClientDialog", "Send", nullptr));
        label->setText(QCoreApplication::translate("ClientDialog", "Host:", nullptr));
        HostEdit->setText(QCoreApplication::translate("ClientDialog", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("ClientDialog", "Port:", nullptr));
        PortEdit->setText(QCoreApplication::translate("ClientDialog", "8080", nullptr));
        label_3->setText(QCoreApplication::translate("ClientDialog", "User:", nullptr));
        UserEdit->setText(QCoreApplication::translate("ClientDialog", "Jerry", nullptr));
        ConnectButton->setText(QCoreApplication::translate("ClientDialog", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
