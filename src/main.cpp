#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <cstdio>
int main(int argc, char *argv[])
{
    QApplication iceRayTracer(argc, argv);
    QFile file(":/style/styleSheet");
    fprintf(stderr,"In main fun\n");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
      fprintf(stderr,"load file succ\n");
        iceRayTracer.setStyleSheet(file.readAll());
        file.close();
    }
    MainWindow w;
    w.show();

    return iceRayTracer.exec();
}
