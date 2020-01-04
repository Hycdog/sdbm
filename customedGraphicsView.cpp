#include"customedGraphicsView.h"

customedGraphicsView::customedGraphicsView(QWidget *parent){
    this->setMouseTracking(true);
    this->lastMousePos = nullptr;
    this->pressed =false;
    this->lastScale = nullptr;
    this->maximumPointCount = -1;
    this->selectedPoint = -1;
    this->currentCursor = Qt::CursorShape::ArrowCursor;
    this->tempCursor = nullptr;
    this->dotPen = new QPen();
    this->linePen = new QPen();
    this->attr = "Picture";
}

void customedGraphicsView::setAttr(QString attr){
    this->attr = attr;
    if (attr == "Video"){
        this->setCurrentCursor(Qt::ArrowCursor);
    }
}

void customedGraphicsView::wheelEvent(QWheelEvent *event){
    if (this->attr == "Picture"){
        QPoint cursorPoint = event->pos();
        QPointF scenePos = this->mapToScene(QPoint(cursorPoint.x(), cursorPoint.y()));
        int viewWidth = this->viewport()->width();
        int viewHeight = this->viewport()->height();
        double hScale = cursorPoint.x() / viewWidth;
        double vScale = cursorPoint.y() / viewHeight;
        int deltaval = event->angleDelta().y();
        if (deltaval > 0)
            this->scale(1.2, 1.2);
        else
            this->scale(1.0 / 1.2, 1.0 / 1.2);
        QPointF viewPoint = this->transform().map(scenePos);
        this->horizontalScrollBar()->setValue(int(viewPoint.x() - viewWidth * hScale));
        this->verticalScrollBar()->setValue(int(viewPoint.y() - viewHeight * vScale));
        this->setCurrentCursor(this->chooseCursor());
    }
}

Qt::CursorShape customedGraphicsView::chooseCursor(){
    if (this->attr == "Picture"){
        if (this->tempCursor != nullptr)
            return *this->tempCursor;
        else
            if (this->lastScale != nullptr){
                if (this->getMultiplier() > *this->lastScale)
                    return  this->pressed ? Qt::OpenHandCursor : Qt::ClosedHandCursor;
                else
                    return Qt::ArrowCursor;
            }
            else
                return Qt::ArrowCursor;
    }
    else
        return Qt::OpenHandCursor;
}

void customedGraphicsView::setCurrentCursor(Qt::CursorShape cursor){
    this->storeCursor(cursor);
    this->applyStoredCursor();
}

void customedGraphicsView::storeCursor(Qt::CursorShape cursor){
    this->currentCursor = cursor;
}

void customedGraphicsView::setTemporaryCursor(Qt::CursorShape cursor){
    this->tempCursor = &cursor;
    this->setCursor(cursor);
}

void customedGraphicsView::unsetTemporaryCursor(){
    if(this->tempCursor != nullptr){
        delete this->tempCursor;
        this->tempCursor = nullptr;
    }
    this->applyStoredCursor();
}

void customedGraphicsView::applyStoredCursor(){
    this->setCursor(this->currentCursor);
}

void customedGraphicsView::leaveEvent(QEvent a0){
    emit sigLeave(true);
    a0.accept();
}

void customedGraphicsView::enterEvent(QEvent a0){
    emit sigEnter(true);
    a0.accept();
}

void customedGraphicsView::paintDot(QPointF point){
    QGraphicsScene* scene = this->scene();
    scene->addRect(point.x()-1, point.y()-1, 3, 3, *this->dotPen);
    this->setScene(scene);
}

void customedGraphicsView::paintLine(QPointF pointA, QPointF pointB){
    QGraphicsScene* scene = this->scene();
    qreal x1 = pointA.x();
    qreal x2 = pointB.x();
    qreal y1 = pointA.y();
    qreal y2 = pointB.y();
    QLineF line(x1, y1, x2, y2);
    this->lineList.emplace_back(line);
    scene->addLine(line, *this->linePen);
    this->setScene(scene);
}

void customedGraphicsView::storePoint(QPointF scenePos){
    this->selectedPoint ++;
    this->selectedPointList.emplace_back(scenePos);
    if (this->selectedPoint == 1){
        this->paintDot(scenePos);
    }
    else{
        this->paintDot(scenePos);
        this->paintLine(this->selectedPointList[this->selectedPoint-1], this->selectedPointList[this->selectedPoint-2]);
        if(this->selectedPoint >= this->maximumPointCount){
            this->selectedPoint = -1;
            this->maximumPointCount = -1;
            this->unsetTemporaryCursor();
            emit sigPointSelectionFinished(this->selectedPointList, this->lineList);
            this->selectedPointList.clear();
            this->lineList.clear();
        }
    }

}

void customedGraphicsView::startDraw(int pointCount){
    this->setTemporaryCursor(Qt::CrossCursor);
    this->selectedPoint = 0;
    this->maximumPointCount = pointCount;
    QColor color = Qt::blue;
    this->dotPen->setColor(color);
    this->linePen->setColor(color);
    this->dotPen->setWidth(1);
    this->linePen->setWidth(1);
}

double customedGraphicsView::getMultiplier(){
    return this->transform().m11();
}

void customedGraphicsView::mousePressEvent(QMouseEvent *event){
    if(this->attr == "Picture"){
        this->pressed = true;
        if(this->selectedPoint == -1){
            this->setCurrentCursor(this->chooseCursor());
        }
        else{
            QPoint cursorPoint = event->pos();
            QPointF scenePos = this->mapToScene(QPoint(cursorPoint.x(), cursorPoint.y()));
            this->storePoint(scenePos);
        }
    }
}

void customedGraphicsView::mouseReleaseEvent(QMouseEvent *event){
    if(this->attr == "Picture"){
        this->pressed = false;
        if(this->selectedPoint == -1){
            this->setCurrentCursor(this->chooseCursor());
        }
    }
}

void customedGraphicsView::mouseMoveEvent(QMouseEvent *event){
    if(this->attr == "Picture"){
        if(this->lastMousePos != nullptr && this->pressed){
            QPointF mouseDelta = this->mapToScene(event->pos()) - this->mapToScene(*this->lastMousePos);
            this->moveScene(mouseDelta);
        }
        if(this->lastMousePos != nullptr){
            delete this->lastMousePos;
        }
        this->lastMousePos = new QPoint(event->pos());
    }
}

void customedGraphicsView::moveScene(QPointF delta){
    delta *= this->getMultiplier();
    this->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    this->centerOn(this->mapToScene(QPoint(this->viewport()->rect().width()/2 - delta.x(), this->viewport()->rect().height()/2 - delta.y())));
    this->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
}

void customedGraphicsView::fitview(QGraphicsItem *item){
    this->fitInView(item, Qt::KeepAspectRatio);
    this->lastScale = new double(this->getMultiplier());
}


