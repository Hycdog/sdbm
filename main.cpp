#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>
#include <QDir>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(QDir::currentPath()+"/dark.qss");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
    LoginWindow l;
    l.show();
    return a.exec();
}
