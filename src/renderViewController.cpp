#include "renderViewController.h"
#include <cstdio>
RenderViewController::RenderViewController()
{
    rayTracerPtr = new RayTracer;
    QObject::connect(rayTracerPtr, SIGNAL(calculatedApixel(int ,int ,QColor)),this, SLOT(getApixelValue(int ,int ,QColor)));
}

RenderViewController::~RenderViewController()
{
  if(rayTracerPtr)
        delete rayTracerPtr;
}

void RenderViewController::getApixelValue(int x,int y,QColor rgb)
{
    emit notifyGetPixel( x, y,rgb);
}


bool RenderViewController::renderScene()
{
    printf("enter view controller render scene\n");
    rayTracerPtr->start();
}
