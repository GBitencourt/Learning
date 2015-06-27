//Aula de c++ episódio atual: https://www.youtube.com/watch?v=t9iyPMyMjrg&list=PLesCEcYj003QTw6OhCOFb1Fdl8Uiqyrqo&index=16

#include <QMouseEvent>
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
            QGraphicsRectItem *meuRect=minhacena->addRect( i*50,x*50,50,50 );
            QColor preto(0,0,0);
            QColor branco(255,255,255);
            QBrush meuBrush;
            meuBrush.setStyle( Qt::SolidPattern );
            int y = ( x + i ) ;
            if ( y % 2 == 0) {
                meuBrush.setColor(branco);
                meuRect->setBrush(meuBrush);
                qDebug() << "-Braquim" ;
            }
            else {
                meuBrush.setColor(preto);
                meuRect->setBrush(meuBrush);
                qDebug() << "+Pretim";
            }
            qDebug() << "Teste de For:" << i << "e" << x ;
            }
    }
    //qDebug()<< "Teste 2";
    for ( int pBC = 0; pBC < 3 ; pBC = pBC + 1 ) {
        for ( int pBL = 0; pBL < 8 ; pBL = pBL + 1) {
        QColor branco (255,255,255);
        QBrush meuBrush;
        meuBrush.setStyle( Qt::SolidPattern );
            int y = ( pBL + pBC );
            if ( y % 2 != 0 ) {
                QGraphicsEllipseItem *meuCirculo=minhacena->addEllipse( (pBL*50)+5,(pBC*50)+5,40,40 );
                meuBrush.setColor(branco);
                meuCirculo->setBrush(meuBrush);
                qDebug() << "-Peça Branca";
            }
        }
    }
    for ( int pPC = 5; pPC < 8 ; pPC = pPC + 1 ) {
        for ( int pPL = 0; pPL < 8 ; pPL = pPL + 1) {
        QColor preto (0,0,0);
        QColor branco (255,255,255);
        QBrush meuBrush;
        QPen pen;
        meuBrush.setStyle( Qt::SolidPattern );
            int y = ( pPL + pPC );
            if ( y % 2 != 0 ) {
                QGraphicsEllipseItem *meuCirculo=minhacena->addEllipse( (pPL*50)+5,(pPC*50)+5,38,38 );
                meuBrush.setColor(preto);
                pen.setColor (branco);
                pen.setWidth (2);
                meuCirculo->setBrush(meuBrush);
                meuCirculo->setPen(pen);
                qDebug() << "-Peça Preta";
            }
        }
    }
}
void mainwindow::mousePressEvent(QMouseEvent*ev){
    QList<QGraphicsItem*> itensNoClique = scene()->items( mapToScene( ev->pos() ) );
    for (int i = 0; i < itensNoClique.count();i++){
        QGraphicsItem*itemAtual = itensNoClique[i];
        QGraphicsEllipseItem*bola = dynamic_cast<QGraphicsEllipseItem*>( itemAtual );
        if ( bola != false ) {
            bola->setBrush(QBrush(QColor(Qt::red)));
        }
    }
    //qDebug() << "Na Janela:" << ev->pos() << "Na cena" << mapToScene(ev->pos());
    qDebug() << "Click";
}
void mainwindow::mouseMoveEvent(QMouseEvent*ev){
    qDebug() << "Arrasta";
}
void mainwindow::mouseReleaseEvent(QMouseEvent*ev){
    qDebug() << "Solta";
}
