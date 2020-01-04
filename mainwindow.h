#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QDebug>
#include <QEvent>
#include <QSqlDatabase>
#include "clockThread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QSqlDatabase* dbconn, QWidget *parent = nullptr);
    ~MainWindow();
    void populateTree();
    void setCustomedStyleSheet();
    void setUsername(QString username);
    void setDB(QString db);
private:
    void setupClockThread();
    Ui::MainWindow *ui;
    QSqlDatabase* dbconn;
    ClockThread* clk_thrd;

public slots:
    void redirect(QTreeWidgetItem* item, int column);
    void updateTime(QString datetime);
    void updateStat(bool status);


};
#endif // MAINWINDOW_H
