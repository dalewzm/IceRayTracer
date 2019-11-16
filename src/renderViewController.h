#ifndef __ICERAYTRACER_RENDERVIEWCONTROLLER_H__
#define __ICERAYTRACER_RENDERVIEWCONTROLLER_H__
#include <QString>
#include <QObject>
#include "model/rayTracer/rayTracer.h"
#include "mainwindow.h"
class RenderViewController:public QObject{
    Q_OBJECT
public:
    RenderViewController(MainWindow* mainWindow);
    ~RenderViewController();
    bool parserFile(QString filePath);
    bool renderScene();
public slots:
    void getApixelValue(int x,int y,QColor rgb);
signals:
    void notifyGetPixel(int x,int y,QColor rgb);
private:
    //model class
    RayTracer* rayTracerPtr;
    MainWindow* mainWindowPtr;
};


#endif
