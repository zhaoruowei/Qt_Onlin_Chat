/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

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
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *BackBtn;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *SignInBtn;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *UsernameEdit;
    QLabel *label_2;
    QLineEdit *PasswordEdit;
    QLabel *label_3;
    QLineEdit *ConfirmPasswordEdit;
    QLabel *label_4;
    QLineEdit *EmailEdit;
    QLabel *label_5;
    QSplitter *splitter;
    QLineEdit *CaptchaEdit;
    QPushButton *GetCaptchaBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *SignUpBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(390, 700);
        gridLayout_2 = new QGridLayout(RegisterDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        BackBtn = new QPushButton(RegisterDialog);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));

        horizontalLayout->addWidget(BackBtn);

        horizontalSpacer_9 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        SignInBtn = new QPushButton(RegisterDialog);
        SignInBtn->setObjectName(QString::fromUtf8("SignInBtn"));
        SignInBtn->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(SignInBtn);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        frame = new QFrame(RegisterDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(RegisterDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        UsernameEdit = new QLineEdit(RegisterDialog);
        UsernameEdit->setObjectName(QString::fromUtf8("UsernameEdit"));

        gridLayout->addWidget(UsernameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(RegisterDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        PasswordEdit = new QLineEdit(RegisterDialog);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));

        gridLayout->addWidget(PasswordEdit, 1, 1, 1, 1);

        label_3 = new QLabel(RegisterDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        ConfirmPasswordEdit = new QLineEdit(RegisterDialog);
        ConfirmPasswordEdit->setObjectName(QString::fromUtf8("ConfirmPasswordEdit"));

        gridLayout->addWidget(ConfirmPasswordEdit, 2, 1, 1, 1);

        label_4 = new QLabel(RegisterDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        EmailEdit = new QLineEdit(RegisterDialog);
        EmailEdit->setObjectName(QString::fromUtf8("EmailEdit"));

        gridLayout->addWidget(EmailEdit, 3, 1, 1, 1);

        label_5 = new QLabel(RegisterDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        splitter = new QSplitter(RegisterDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        CaptchaEdit = new QLineEdit(splitter);
        CaptchaEdit->setObjectName(QString::fromUtf8("CaptchaEdit"));
        splitter->addWidget(CaptchaEdit);
        GetCaptchaBtn = new QPushButton(splitter);
        GetCaptchaBtn->setObjectName(QString::fromUtf8("GetCaptchaBtn"));
        GetCaptchaBtn->setFocusPolicy(Qt::NoFocus);
        splitter->addWidget(GetCaptchaBtn);

        gridLayout->addWidget(splitter, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        SignUpBtn = new QPushButton(RegisterDialog);
        SignUpBtn->setObjectName(QString::fromUtf8("SignUpBtn"));

        gridLayout_2->addWidget(SignUpBtn, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 260, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 4, 2, 1, 1);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "TalkClient Sign Up", nullptr));
        BackBtn->setText(QCoreApplication::translate("RegisterDialog", "Back", nullptr));
        SignInBtn->setText(QCoreApplication::translate("RegisterDialog", "Sign In", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDialog", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterDialog", "Confirm Password:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterDialog", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterDialog", "Captcha:", nullptr));
        GetCaptchaBtn->setText(QCoreApplication::translate("RegisterDialog", "Get Captcha", nullptr));
        SignUpBtn->setText(QCoreApplication::translate("RegisterDialog", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
