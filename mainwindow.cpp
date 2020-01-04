#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QSqlDatabase* dbconn, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->dbconn = dbconn;
    ui->setupUi(this);
    populateTree();
    setCustomedStyleSheet();
    setupClockThread();
}

MainWindow::~MainWindow()
{
    delete ui;
    clk_thrd->terminate();
    clk_thrd->wait();
    clk_thrd->deleteLater();
}

void MainWindow::setupClockThread(){
    clk_thrd = new ClockThread(dbconn);
    connect(clk_thrd,SIGNAL(sigDateTime(QString)),this, SLOT(updateTime(QString)));
    connect(clk_thrd,SIGNAL(sigValidateConn(bool)),this, SLOT(updateStat(bool)));
    clk_thrd->start();
}

void MainWindow::populateTree(){
    QTreeWidget* tree = this->ui->treeWidget;
    QTreeWidgetItem* item0 = new QTreeWidgetItem();
    item0->setText(0, "查找学生");
    QTreeWidgetItem* item1 = new QTreeWidgetItem();
    item1->setText(0, "注册学生");
    QTreeWidgetItem* item2 = new QTreeWidgetItem();
    item2->setText(0, "学生拍照");
    tree->addTopLevelItem(item0);
    tree->addTopLevelItem(item1);
    tree->addTopLevelItem(item2);
    tree->header()->hide();
    connect(tree, SIGNAL(itemClicked(QTreeWidgetItem*,int)), this, SLOT(redirect(QTreeWidgetItem*,int)));
}

void MainWindow::redirect(QTreeWidgetItem* item, int column){
    item->setExpanded(!item->isExpanded());
//    qDebug()<<item->text(0);
    QStackedWidget* stackedWidget = this->ui->stackedWidget;
    if (item->text(0) == "查找学生"){
        stackedWidget->setCurrentIndex(0);
    }
    else if (item->text(0) == "注册学生"){
        stackedWidget->setCurrentIndex(1);
    }
    else if (item->text(0) == "学生拍照"){
        stackedWidget->setCurrentIndex(2);
    }
}

void MainWindow::updateTime(QString datetime){
    ui->label_date->setText(datetime);
    ui->label_date->repaint();
}

void MainWindow::updateStat(bool status){
    ui->label_connection->setStyleSheet(status ? "color:green": "color:red");
    ui->label_connection->setText(status ? "连接正常": "断开连接");
}

void MainWindow::setCustomedStyleSheet(){
    ui->label_date->setStyleSheet("color: blue;");
    ui->label_username->setStyleSheet("color:rgb(6, 82, 171);");
    ui->label_db->setStyleSheet("color:rgb(137, 207, 240);");
}

void MainWindow::setUsername(QString username){
    ui->label_username->setText("用户名："+username);
}

void MainWindow::setDB(QString db){
    ui->label_db->setText("数据库："+db);
}
