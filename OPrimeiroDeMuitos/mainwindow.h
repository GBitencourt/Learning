#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsView>

class mainwindow : public QGraphicsView {
public:
    mainwindow();
    void mousePressEvent(QMouseEvent*ev);
    void mouseMoveEvent(QMouseEvent*ev);
    void mouseReleaseEvent(QMouseEvent*ev);
};


#endif // MAINWINDOW_H

