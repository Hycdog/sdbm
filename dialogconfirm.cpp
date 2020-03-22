#include "dialogconfirm.h"
#include "ui_ui_popup_noicon.h"
DialogConfirm::DialogConfirm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_popup)
{
    setStyleSheet(
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
    tf = false;
    ui->setupUi(this);
    connect(ui->pushButton_Y, SIGNAL(clicked()), this, SLOT(choiceY()));
    connect(ui->pushButton_N, SIGNAL(clicked()), this, SLOT(choiceN()));
}

void DialogConfirm::choiceY(){
    tf = true;
    close();
}

void DialogConfirm::choiceN(){
    tf = false;
    close();
}

void DialogConfirm::setTitle(QString title){
    this->setWindowTitle(title);
}

void DialogConfirm::setInfo(QString info){
    ui->label_text->setText(info);
}
bool DialogConfirm::execute(){
    this->exec();
    return tf;
}
