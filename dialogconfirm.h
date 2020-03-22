#ifndef DIALOGCONFIRM_H
#define DIALOGCONFIRM_H
#include<QDialog>
#include<QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog_popup; }
QT_END_NAMESPACE
class DialogConfirm : QDialog
{
    Q_OBJECT

public:
    DialogConfirm(QWidget *parent = nullptr);
    void setTitle(QString title);
    void setInfo(QString info);
    bool execute();
private:
    Ui::Dialog_popup *ui;
    bool tf;
signals:
    void retVal(bool stat);
public slots:
    void choiceY();
    void choiceN();
};

#endif // DIALOGCONFIRM_H
