/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *BackBtn;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *SignUpBtn;
    QSpacerItem *horizontalSpacer_11;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *UsernameEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *PasswordEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *SignInBtn;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(390, 700);
        gridLayout_3 = new QGridLayout(LoginDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_10 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        BackBtn = new QPushButton(LoginDialog);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));

        horizontalLayout->addWidget(BackBtn);

        horizontalSpacer_9 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        SignUpBtn = new QPushButton(LoginDialog);
        SignUpBtn->setObjectName(QString::fromUtf8("SignUpBtn"));

        horizontalLayout->addWidget(SignUpBtn);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(LoginDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(56, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        UsernameEdit = new QLineEdit(LoginDialog);
        UsernameEdit->setObjectName(QString::fromUtf8("UsernameEdit"));

        gridLayout->addWidget(UsernameEdit, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        PasswordEdit = new QLineEdit(LoginDialog);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));

        gridLayout->addWidget(PasswordEdit, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(55, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_3->addItem(verticalSpacer, 3, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(134, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 4, 0, 1, 2);

        SignInBtn = new QPushButton(LoginDialog);
        SignInBtn->setObjectName(QString::fromUtf8("SignInBtn"));

        gridLayout_3->addWidget(SignInBtn, 4, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(134, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_12, 4, 3, 1, 2);

        verticalSpacer_6 = new QSpacerItem(20, 260, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 5, 2, 1, 1);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        BackBtn->setText(QCoreApplication::translate("LoginDialog", "Back", nullptr));
        SignUpBtn->setText(QCoreApplication::translate("LoginDialog", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Password:", nullptr));
        SignInBtn->setText(QCoreApplication::translate("LoginDialog", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
