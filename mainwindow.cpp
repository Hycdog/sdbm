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
    setWindowTitle("学生数据库管理系统");
    updateYxh();
    getInformation();
    QStackedWidget* stackedWidget = this->ui->stackedWidget;
    stackedWidget->setCurrentIndex(0);

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
    connect(ui->pushButton_register, SIGNAL(clicked()), this, SLOT(registerUser()));
    ui->tableWidget_displayUser->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableWidget_displayUser, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(generateMenu(const QPoint&)));
}

void MainWindow::deleteUser(QString username){
    QMessageBox warn(QMessageBox::Warning, "删除失败", "删除失败！", QMessageBox::Yes);
    warn.button(QMessageBox::Yes)->setText("确认");
    warn.setStyleSheet(
        "QPushButton {"
        " font: bold 24px;"
        "padding-left: 3ex;"
        "padding-right: 3ex;"
        "padding-top: 1ex;"
        "padding-bottom: 1ex;"
        "margin-left:0px;"
        "}"
        "QLabel { font:24px}"
    );
    QSqlQuery result = QSqlQuery(*dbconn);
    QString sql = "delete from s where xh=:xh";
    result.prepare(sql);
    result.bindValue(":xh",QString("%1").arg(username));
    result.exec();
    QString errMsg = result.lastError().text();
    if(errMsg.trimmed().length() > 0){
        warn.setText(errMsg);
        warn.exec();
        qDebug()<<errMsg;
        return;
    }
    else{
        dbconn->commit();
        getInformation();
        warn.setWindowTitle("删除成功");
        warn.setText("删除成功!");
        warn.setIcon(QMessageBox::Information);
        warn.exec();

    }

}

void MainWindow::warnDelete(QString username){
    DialogConfirm confirmDelete;
    confirmDelete.setTitle("确认删除");
    confirmDelete.setInfo("确认删除"+username+"?");

    bool reply = confirmDelete.execute();
    if (reply)
        deleteUser(username);
    else
        return;
}
void MainWindow::generateMenu(const QPoint& pos){
    QTableWidgetItem* item = ui->tableWidget_displayUser->itemAt(pos);
    if(item == nullptr)  return;
    int row_num = item->row();
    QMenu menu;
    QAction* item1 = menu.addAction("删除用户");
    QAction* action = menu.exec(ui->tableWidget_displayUser->mapToGlobal(pos));
    if(action == item1)
    {
        warnDelete(ui->tableWidget_displayUser->item(row_num, 0)->text());
    }


    else
        return;
}
void MainWindow::clearTable(){
    QTableWidget* table = ui->tableWidget_displayUser;
    table->clear();
    table->setRowCount(0);
}

void MainWindow::updateYxh(){
    QString sql = "select * from d";
    QSqlQuery result = QSqlQuery(*dbconn);
    result.prepare(sql);
    result.exec();
    QString errMsg = result.lastError().text();
    while(result.next()){
        QSqlRecord record = result.record();
        int fieldCount = record.count();
        map<QString, QString> feedDict;
        for (int i=0; i<fieldCount; i++) {
            feedDict.insert(pair<QString, QString>(record.fieldName(i),record.value(i).toString()));
        }
        ui->comboBox_dep->addItem(feedDict["mc"]);
        feedDict.clear();
    }
}

void MainWindow::getInformation(){
    clearTable();
    QString xm = ui->lineEdit_stuname->text();
    QString xh = ui->lineEdit_sno->text();
    QString xb = ui->comboBox_gender->currentText();
    QString sql = "select xh,xm,xb,csrq,jg,sjhm,mc from s inner join d on s.yxh=d.yxh where xh like :xh and xm like :xm";
    if(xb != "全部"){
        sql += " and xb='"+xb+"'";
    }
//    qDebug()<<Validator::SqlValidator(sql);
    QSqlQuery result = QSqlQuery(*dbconn);
    result.prepare(sql);
    result.bindValue(":xm",QString("%%1%").arg(xm));
    result.bindValue(":xh",QString("%%1%").arg(xh));
    result.exec();
    QString errMsg = result.lastError().text();
    int recCnt = result.size();
    if (recCnt > 0){
        ui->label_querystatus->setText("共找到 "+QString::number(recCnt)+" 条记录.");
    }
    else{
        ui->tableWidget_displayUser->horizontalHeader()->setHidden(true);
        if(errMsg.size() == 1){
           ui->label_querystatus->setText("未找到相关记录.");
        }
        else{
            ui->label_querystatus->setText("查询发生错误.");
        }
    }
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
    tree->setIndentation(0);
    QTreeWidgetItem* item0 = new QTreeWidgetItem();
    item0->setText(0, "查找学生");
    item0->setTextAlignment(0,Qt::AlignHCenter | Qt::AlignVCenter);
    QTreeWidgetItem* item1 = new QTreeWidgetItem();
    item1->setText(0, "注册学生");
    item1->setTextAlignment(0,Qt::AlignHCenter | Qt::AlignVCenter);
    QTreeWidgetItem* item2 = new QTreeWidgetItem();
    item2->setText(0, "学生拍照");
    tree->addTopLevelItem(item0);
    tree->addTopLevelItem(item1);
//    tree->addTopLevelItem(item2);
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

void MainWindow::registerUser(){
    QString name = ui->lineEdit_registerUser_name->text();
    QString sex = ui->lineEdit_registerUser_sex->text();
    QString csrq = ui->lineEdit_registerUser_csrq->text();
    QString sno = ui->lineEdit_registerUser_sno->text();
    QString sjhm = ui->lineEdit_registerUser_sjhm->text();
    QString jg = ui->lineEdit_registerUser_jg->text();
    QString yxh_mc = ui->comboBox_dep->currentText();
    QString yxh;
    QString sql = "select * from d where mc=:mc";
    QSqlQuery result = QSqlQuery(*dbconn);
    result.prepare(sql);
    result.bindValue(":mc",QString("%1").arg(yxh_mc));
    result.exec();
    while(result.next()){
        QSqlRecord record = result.record();
        int fieldCount = record.count();
        map<QString, QString> feedDict;
        for (int i=0; i<fieldCount; i++) {
            feedDict.insert(pair<QString, QString>(record.fieldName(i),record.value(i).toString()));
        }
        yxh = feedDict["yxh"];
        feedDict.clear();
    }
    QMessageBox warn(QMessageBox::Warning, "注册失败", "注册失败！", QMessageBox::Yes);
    warn.button(QMessageBox::Yes)->setText("确认");
    warn.setStyleSheet(
        "QPushButton {"
        " font: bold 24px;"
        "padding-left: 3ex;"
        "padding-right: 3ex;"
        "padding-top: 1ex;"
        "padding-bottom: 1ex;"
        "margin-left:0px;"
        "}"
        "QLabel { font:24px}"
    );
    if(name.length() == 0){
        warn.setText("姓名不能为空！");
        warn.exec();
        return;
    }
    if(sex != "女" && sex != "男"){
        warn.setText("性别为男或女");
        warn.exec();
        return;
    }
    QStringList ymd = csrq.split("-");
    bool ymd_ok = true;
    if(ymd.length() != 3){
        ymd_ok = false;
    }
    else{
        bool* ok_y,*ok_m,*ok_d;
        int y = ymd[0].toInt(ok_y);
        int m = ymd[1].toInt(ok_m);
        int d = ymd[2].toInt(ok_d);
        if(!ok_y && ok_m && ok_d){
            ymd_ok = false;
        }
        else{
            if(m < 1 || m > 12 || d > 31 || d < 1 || y < 1900){
                ymd_ok = false;
            }
            else{
                if((m == 4 || m == 6 || m == 9 || m == 11 )&& d == 31){
                    ymd_ok = false;
                }
                if(m == 2){
                    if( d > 29){
                        ymd_ok = false;
                    }
                    if(y%100 == 0 && y%400 != 0 || y%4 != 0){
                        if(d == 29){
                            ymd_ok = false;
                        }
                    }

                }

            }
        }
    }
    if(!ymd_ok){
        warn.setText("日期不正确 日期格式为yyyy-mm-dd");
        warn.exec();
        return;
    }
    if(sno.length() == 0){
        warn.setText("学号不能为空！");
        warn.exec();
        return;
    }
    sql = "select * from s inner join d on s.yxh=d.yxh where xh=:xh";
    result.prepare(sql);
    result.bindValue(":xh",QString("%1").arg(sno));
    result.exec();
    QString errMsg = result.lastError().text();
    int recCnt = result.size();
    if(recCnt>0){
        warn.setText("学号已经存在！");
        warn.exec();
        return;
    }

    if(sjhm.length()!= 11){
        warn.setText("手机号码不正确！");
        warn.exec();
        return;
    }
    if(jg.length()== 0){
        warn.setText("籍贯不能为空！");
        warn.exec();
        return;
    }
    sql = "insert into s values(:xh, :xm, :xb, :csrq, :jg, :sjhm, :yxh)";
    result.prepare(sql);
    result.bindValue(":xh",QString("%1").arg(sno));
    result.bindValue(":xm",QString("%1").arg(name));
    result.bindValue(":xb",QString("%1").arg(sex));
    result.bindValue(":csrq",QString("%1").arg(csrq));
    result.bindValue(":jg",QString("%1").arg(jg));
    result.bindValue(":sjhm",QString("%1").arg(sjhm));
    result.bindValue(":yxh",QString("%1").arg(yxh));
    result.exec();
    errMsg = result.lastError().text();
    if(errMsg.trimmed().length() > 0){
        warn.setText(errMsg);
        warn.exec();
        qDebug()<<errMsg;
        return;
    }
    else{
        dbconn->commit();
        warn.setWindowTitle("注册成功");
        warn.setText("注册成功!");
        warn.setIcon(QMessageBox::Information);
        warn.exec();
        QStackedWidget* stackedWidget = this->ui->stackedWidget;
        stackedWidget->setCurrentIndex(0);
        getInformation();
    }
    return;


}
