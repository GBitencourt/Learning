#include "mainwindow.h"

#include <QApplication>

#include <QDebug>
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    qDebug()<< "teste";
    mainwindow janela;
    janela.show();
    app.exec();
    return 0;
}
