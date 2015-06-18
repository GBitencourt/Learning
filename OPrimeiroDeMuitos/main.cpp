#include "mainwindow.h"

#include <QApplication>

#include <QDebug>
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    qDebug()<< "teste";
    app.exec();
    return 0;
}
