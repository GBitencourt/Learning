#include <QDebug>
#include "mainwindow.h"
#include <QGraphicsScene>

mainwindow::mainwindow() {
    QGraphicsScene *minhacena = new QGraphicsScene();
    setScene(minhacena);
    minhacena->addRect(20,50,20,50);
    qDebug()<< "Teste 2";
}
