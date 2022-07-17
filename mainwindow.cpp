#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(int width, int height, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    m_windowName = "Main";

    m_width = width;
    m_height = height;
    this->setFixedSize(m_width, m_height);
    ui->setupUi(this);
    this->setMinimumSize(0, 0);
    this->setMaximumSize(1920, 1080);

    connect(ui->SignInBtn, SIGNAL(clicked()), this, SLOT(SignInBtn_clicked()));
    connect(ui->SignUpBtn, SIGNAL(clicked()), this, SLOT(SignUpBtn_clicked()));
    // 绑定切换窗口信号槽函数
    connect(this, SIGNAL(transWindow(QString,QString)), this, SLOT(TransWindow_emited(QString,QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SignInBtn_clicked()
{
    // 发射切换窗口信号，切换SignIn界面
    emit transWindow(m_windowName, "SignIn");
}


void MainWindow::SignUpBtn_clicked()
{
    // 发射切换窗口信号，切换SignUp界面
    emit transWindow(m_windowName, "SignUp");
}

void MainWindow::TransWindow_emited(QString currentWindow, QString transWindow)
{
    // 判断要切换哪一个窗口
    if (transWindow == "Main")
    {
        this->show();
    }
    else if (transWindow == "SignIn")
    {
        m_SignInWindow = new LoginDialog(m_width, m_height, this);

        this->hide();
        m_SignInWindow->show();
    }
    else if (transWindow == "SignUp")
    {
        m_SignUpWindow = new RegisterDialog(m_width, m_height, this);

        this->hide();
        m_SignUpWindow->show();
    }

    if (currentWindow != "Main")
    {
        this->closeWindow(currentWindow);
    }
}

// 重写绘图事件
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rect = ui->frame->frameRect();
    rect.translate(ui->frame->pos());
    QImage logo(":/qmullogo.png");
    ui->frame->setFixedSize(logo.size()*.5);
    painter.drawImage(rect, logo);
}

// 切换窗口后，释放触发切换窗口信号的当前窗口
void MainWindow::closeWindow(QString currentWindow)
{
    if (currentWindow == "SignIn")
    {
        m_SignInWindow->close();
    }
    else if (currentWindow == "SignUp")
    {
        m_SignUpWindow->close();
    }
}
