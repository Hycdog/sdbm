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
    setupComboBoxes();
    connectInterfaces();
}

MainWindow::~MainWindow()
{
    delete ui;
    clk_thrd->terminate();
    clk_thrd->wait();
    clk_thrd->deleteLater();
}

void MainWindow::connectInterfaces(){
    connect(ui->pushButton_search, SIGNAL(clicked()), this, SLOT(getInformation()));
}


void MainWindow::clearTable(){
    QTableWidget* table = ui->tableWidget_displayUser;
    table->clear();
    table->setRowCount(0);
}

void MainWindow::getInformation(){
    clearTable();
    QString xm = ui->lineEdit_stuname->text();
    QString xh = ui->lineEdit_sno->text();
    QString xb = ui->comboBox_gender->currentText();
    QString sql = "select xh,xm,xb,csrq,jg,sjhm,mc from s inner join d on s.yxh=d.yxh where xh like '%"+xh+"%' and xm like '%"+xm+"%'";
    if(xb != "全部"){
        sql += " and xb='"+xb+"'";
    }
    qDebug()<<sql;
    QSqlQuery result = QSqlQuery(*dbconn);
    result.prepare(sql);
    result.exec();
    while(result.next()){
        QSqlRecord record = result.record();
        int fieldCount = record.count();
        map<QString, QString> feedDict;
        for (int i=0; i<fieldCount; i++) {
            feedDict.insert(pair<QString, QString>(record.fieldName(i),record.value(i).toString()));
        }
        insertTableRow(feedDict);
        feedDict.clear();
    }
}

void MainWindow::insertTableRow(map<QString, QString> feedDict){
    QTableWidget* table = ui->tableWidget_displayUser;
    int currentRow =table->rowCount();
    int colCount = feedDict.size();

    if(currentRow == 0){
        table->setColumnCount(colCount);
        table->setHorizontalHeaderLabels(DEFAULT_HEADER);
    }
    table->setRowCount(currentRow+1);
    int col = 0;
    for(auto i:feedDict){
//        qDebug()<<currentRow<<i.first<<i.second;
        QTableWidgetItem* item = new QTableWidgetItem(i.second);
        if(i.first == "xb" and i.second == "男") item->setForeground(QBrush(COLOR_M));
        else if(i.first == "xb" and i.second == "女") item->setForeground(QBrush(COLOR_F));
        else if(i.first == "xm") item->setForeground(QBrush(COLOR_NAME));
        else item->setForeground(QBrush(COLOR_OTHER));
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
        table->setItem(currentRow, FIELD_ORDER(i.first), item);
    }
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



void MainWindow::setCustomedStyleSheet(){
    ui->label_date->setStyleSheet("color: blue;");
    ui->label_username->setStyleSheet("color:rgb(6, 82, 171);");
    ui->label_db->setStyleSheet("color:rgb(137, 207, 240);");
}


void MainWindow::setupClockThread(){
    clk_thrd = new ClockThread(dbconn);
    connect(clk_thrd,SIGNAL(sigDateTime(QString)),this, SLOT(updateTime(QString)));
    connect(clk_thrd,SIGNAL(sigValidateConn(bool)),this, SLOT(updateStat(bool)));
    clk_thrd->start();
}

void MainWindow::setupComboBoxes(){
    ui->comboBox_gender->addItem("全部");
    ui->comboBox_gender->addItem("男");
    ui->comboBox_gender->addItem("女");
    ui->comboBox_gender->setCurrentIndex(0);
}
void MainWindow::setUsername(QString username){
    ui->label_username->setText("用户名："+username);
}

void MainWindow::setDB(QString db){
    ui->label_db->setText("数据库："+db);
}

void MainWindow::updateStat(bool status){
    ui->label_connection->setStyleSheet(status ? "color:green": "color:red");
    ui->label_connection->setText(status ? "连接正常": "断开连接");
}

void MainWindow::updateTime(QString datetime){
    ui->label_date->setText(datetime);
    ui->label_date->repaint();
}
