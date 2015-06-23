//Aula de c++ episódio atual: https://www.youtube.com/watch?v=t9iyPMyMjrg&list=PLesCEcYj003QTw6OhCOFb1Fdl8Uiqyrqo&index=16

#include <QDebug>
#include "mainwindow.h"
#include <QGraphicsScene>

mainwindow::mainwindow() {
    QGraphicsScene *minhacena = new QGraphicsScene();
    setScene(minhacena);
    //minhacena->addRect(20,50,20,50);
    for( int i = 0; i < 8; i = i + 1 ) {
            for ( int x = 0; x < 8; x = x + 1 ) {
            minhacena->addRect(i*50,x*50,50,50);
            qDebug() << "Teste de For:" << i << "e" << x ;
            }
    }
    //qDebug()<< "Teste 2";
}
