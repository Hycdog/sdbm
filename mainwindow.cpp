#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->PopulateTree();
//    connect(this->ui->treeWidget,SIGNAL(itemClicked),this, SLOT(redirect));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PopulateTree(){
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
