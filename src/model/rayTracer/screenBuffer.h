#ifndef __ICERAYTRACER_SCREENBUFFER_H__
#define __ICERAYTRACER_SCREENBUFFER_H__

#include<QWaitCondition>

#include "screenPixel.h"

const int screenBufferSize = 10;



class ScreenBuffer{
  public:
    ScreenBuffer();
    ScreenPixel getPixel();
    void setPixel(ScreenPixel pixel);
    int used;
    ScreenPixel buffer[screenBufferSize];
    QWaitCondition bufferIsFull;
    QWaitCondition bufferIsEmpty;
    QMutex mutex;
  private:
    ScreenBuffer(const ScreenBuffer&);
    //ScreenBuffer operator = (const ScreenBuffer&);

};

ScreenBuffer& getScreenBuffer();

#endif
