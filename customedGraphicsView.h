#ifndef CUSTOMEDGRAPHICSVIEW_H
#define CUSTOMEDGRAPHICSVIEW_H

#include<QGraphicsView>
#include<vector>
#include<QWheelEvent>
#include<QScrollBar>
#include<Qt>
#include<cmath>
using std::vector;
class customedGraphicsView: public QGraphicsView
{
    Q_OBJECT

public:

    customedGraphicsView(QWidget *parent = nullptr);
    void setAttr(QString attr);
    void wheelEvent(QWheelEvent *event) override;
    Qt::CursorShape chooseCursor();
    void setCurrentCursor(Qt::CursorShape cursor);
    void storeCursor(Qt::CursorShape cursor);
    void setTemporaryCursor(Qt::CursorShape cursor);
    void unsetTemporaryCursor();
    void applyStoredCursor();
    void leaveEvent(QEvent a0);
    void enterEvent(QEvent a0);
    void paintDot(QPointF point);
    void paintLine(QPointF pointA, QPointF pointB);
    void storePoint(QPointF scenePos);
    void startDraw(int pointCount);
    double getMultiplier();
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void moveScene(QPointF delta);
    void fitview(QGraphicsItem* item);


signals:
   void sigLeave(bool state);
   void sigEnter(bool state);
   void sigPointSelectionFinished(vector<QPointF> vector_point,vector<QLineF> vector_line);
   void sigLineDrawn(QLineF line);

private:
   QPoint* lastMousePos;
   bool pressed;
   double* lastScale;
   int maximumPointCount;
   int selectedPoint;
   vector<QPointF> selectedPointList;
   vector<QLineF> lineList;
   Qt::CursorShape currentCursor;
   Qt::CursorShape* tempCursor;
   QPen* dotPen;
   QPen* linePen;
   QString attr;

};
#endif // CUSTOMEDGRAPHICSVIEW_H
