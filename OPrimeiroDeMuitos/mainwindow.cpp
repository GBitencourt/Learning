//Aula de c++ episódio atual: https://www.youtube.com/watch?v=t9iyPMyMjrg&list=PLesCEcYj003QTw6OhCOFb1Fdl8Uiqyrqo&index=16

#include <QDebug>
#include "mainwindow.h"
#include <QGraphicsScene>
#include "QColor"
#include "QBrush"
#include "QGraphicsRectItem"

mainwindow::mainwindow() {
    QGraphicsScene *minhacena = new QGraphicsScene();
    setScene(minhacena);
    //minhacena->addRect(20,50,20,50);
    for( int i = 0; i < 8; i = i + 1 ) {
            for ( int x = 0; x < 8; x = x + 1 ) {
            QGraphicsRectItem *meuRect=minhacena->addRect(i*50,x*50,50,50);
            QColor preto(0,0,0);
            QColor branco(255,255,255);
            QBrush meuBrush;
            int y = ( x + i ) ;
            if ( y % 2 == 0) {
                meuBrush.setColor(preto);
                meuRect->setBrush(meuBrush);
                qDebug() << "+Pretim" ;
            }
            else {
                meuBrush.setColor(branco);
                meuRect->setBrush(meuBrush);
                qDebug() << "-Braquim";
            }
            qDebug() << "Teste de For:" << i << "e" << x ;
            }
    }
    //qDebug()<< "Teste 2";
}
