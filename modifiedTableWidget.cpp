#include"modifiedTableWidget.h"
Table::Table(QWidget *parent){
    this->setMouseTracking(true);
    this->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    this->horizontalHeader()->setStretchLastSection(true);
    this->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    this->verticalHeader()->setHidden(true);
    this->setSelectionMode(QTableWidget::SingleSelection);
    this->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(this, SIGNAL(cellEntered), this, SLOT(mouseOnRow), Qt::DirectConnection);
}

void Table::leaveEvent(QEvent event){
    QTableWidgetItem* item = this->item(this->previousColorRow, 0);
    if (item != nullptr){
        this->setRowColor(this->previousColorRow, this->lastRowBkColor);
    }
    event.accept();
}

void Table::mouseOnRow(int row, int column){
    QTableWidgetItem* item = this->item(this->previousColorRow, 0);
            if (item != nullptr){
                this->setRowColor(this->previousColorRow, this->lastRowBkColor);
            }
            item = this->item(row, column);
            if (item != nullptr and !item->isSelected()){
                this->setRowColor(row, QColor(40, 65, 79));
            }
            this->previousColorRow = row;
}

void Table::setRowColor(int row, QColor color){
    for (int i=0;i<this->columnCount();i++) {
        QTableWidgetItem* item = this->item(row, i);
        item->setBackgroundColor(color);
    }
}
