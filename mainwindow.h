#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QTableWidget>
#include <QDebug>
#include <QEvent>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QMenu>
#include <QAction>
#include "clockThread.h"
#include <map>
#include "defaults.h"
#include "dialogconfirm.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
using std::map;
using std::pair;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QSqlDatabase* dbconn, QWidget *parent = nullptr);
    ~MainWindow();
    void connectInterfaces();
    void populateTree();
    void setCustomedStyleSheet();
    void setUsername(QString username);
    void setDB(QString db);
    void insertTableRow(map<QString, QString> feedDict);
    void clearTable();
    void setupComboBoxes();
    void updateYxh();
    void warnDelete(QString username);
    void deleteUser(QString username);
private:
    void setupClockThread();
    Ui::MainWindow *ui;
    QSqlDatabase* dbconn;
    ClockThread* clk_thrd;

public slots:
    void registerUser();
    void redirect(QTreeWidgetItem* item, int column);
    void updateTime(QString datetime);
    void updateStat(bool status);
    void getInformation();
    void generateMenu(const QPoint& pos);



};
#endif // MAINWINDOW_H
