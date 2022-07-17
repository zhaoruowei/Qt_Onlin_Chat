#include "mainwindow.h"

#include <QApplication>
#include <QScreen>
#include <QSysInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 获取当前设备可用屏幕大小
    int width = 800, height = 600;
    QScreen *m_screen = a.primaryScreen();
    QSize m_size = m_screen->availableSize();

    // 获取当前设备系统信息
    if (QSysInfo::productType() == "android")
    {
        width = m_size.width();
        height = m_size.height();
    }

    // 运行主窗口
    MainWindow w(width, height);
    w.show();

    return a.exec();
}
