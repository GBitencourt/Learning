#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    mainwindow janela;
    janela.show();
    app.exec();
    return 0;
}
