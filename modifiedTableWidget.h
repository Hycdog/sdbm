#ifndef MODIFIEDTABLEWIDGET_H
#define MODIFIEDTABLEWIDGET_H
#include<QTableWidget>
#include<QHeaderView>
#include<QAbstractItemView>
#include<QEvent>
class Table: public QTableWidget
{
    Q_OBJECT

public:
    Table(QWidget *parent = nullptr);
    void leaveEvent(QEvent event);
    void setRowColor(int row, QColor color);
private:
    QColor lastRowBkColor = QColor(0x00, 0xff, 0x00, 0x00);
    int previousColorRow = -1;

public slots:
    void mouseOnRow(int row, int column);

};


#endif // MODIFIEDTABLEWIDGET_H
