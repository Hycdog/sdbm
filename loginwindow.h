#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QIntValidator>
#include <QMessageBox>
#include <Qt>
QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

    void regulateInput();
    void connectInterfaces();
    void fillLineEditDefault();
    void configuration();

private:
    Ui::Login *ui;
    QSqlDatabase* db;
    MainWindow* mw;

public slots:
    bool connectDB();
    void clearLines();

signals:
    void sigLoginSuccess(QString username,QString database);

};

#endif // LOGINWINDOW_H
