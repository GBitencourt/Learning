#include <QDebug>
#include "mainwindow.h"
#include <QGraphicsScene>

mainwindow::mainwindow() {
    QGraphicsScene *minhacena = new QGraphicsScene();
    setScene(minhacena);
    minhacena->addRect(20,50,20,50);
    minhacena->addText("Teste de texto na caixa yay")
    qDebug()<< "Teste 2";
}
