#include"loginwindow.h"
#include"ui_login.h"
#include"defaults.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
       ui->setupUi(this);
       regulateInput();
       fillLineEditDefault();
       connectInterfaces();
       configuration();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::configuration(){
    ui->lineEdit_password->setFocus();
    setWindowTitle("学生数据库管理系统");
}

void LoginWindow::connectInterfaces(){
    ui->pushButton_login->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_reset->setFocusPolicy(Qt::NoFocus);
    connect(ui->pushButton_login, SIGNAL(clicked(bool)), this, SLOT(connectDB()));
    connect(ui->pushButton_reset, SIGNAL(clicked(bool)), this, SLOT(clearLines()));
    connect(ui->lineEdit_password, SIGNAL(returnPressed()), ui->pushButton_login, SLOT(click()));
}

void LoginWindow::regulateInput(){
    ui->lineEdit_port->setValidator(new QIntValidator(0,65535,this));
//    QRegExp rx("^((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)$");
//    ui->lineEdit_ip->setValidator(new QRegExpValidator(rx, this));
}

void LoginWindow::fillLineEditDefault(){
    this->ui->lineEdit_hostname->setText(HOST_DEFAULT);
    this->ui->lineEdit_port->setText(PORT_DEFAULT);
    this->ui->lineEdit_dbname->setText(DB_DEFAULT);
    this->ui->lineEdit_username->setText(USER_DEFAULT);
}

void LoginWindow::clearLines(){
    this->ui->lineEdit_hostname->setText("");
    this->ui->lineEdit_port->setText("");
    this->ui->lineEdit_dbname->setText("");
    this->ui->lineEdit_username->setText("");
}

bool LoginWindow::connectDB(){
        db = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL"));  //连接的MYSQL的数据库驱动
        db->setHostName(this->ui->lineEdit_hostname->text());         //主机名
        db->setPort((this->ui->lineEdit_port->text()).toInt());                    //端口
        db->setDatabaseName(this->ui->lineEdit_dbname->text());          //数据库名
        db->setUserName(this->ui->lineEdit_username->text());              //用户名
        db->setPassword(this->ui->lineEdit_password->text());            //密码
        db->open();

        //测试连接

        if(!db->open())
        {
            qDebug()<<"不能连接"<<"connect to mysql error"<<db->lastError().text();
            QMessageBox warn(QMessageBox::Warning, "连接失败", "连接数据库失败！"+db->lastError().text(), QMessageBox::Yes);
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
            warn.exec();
            return false;
        }
        else
        {
             qDebug()<<"连接成功"<<"connect to mysql OK";
             emit sigLoginSuccess(ui->lineEdit_username->text(),ui->lineEdit_dbname->text());
             mw = new MainWindow(db);
             mw->setUsername(ui->lineEdit_username->text());
             mw->setDB(ui->lineEdit_dbname->text());
             mw->showMaximized();
             this->close();
        }


}
