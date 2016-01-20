#include "screenBuffer.h"
#include "rayTracer.h"
#include <cstdio>


RayTracer::RayTracer()
{
  scenePtr = new Scene();
  parserPtr = NULL;
}

RayTracer::~RayTracer()
{
  if(scenePtr)
    delete scenePtr;
  if(parserPtr)
    delete parserPtr;
}

void RayTracer::run()
{
    buildScene();
}

bool RayTracer::buildScene()
{
    fprintf(stderr,"thread id is: %x",this->currentThreadId());
    for(int i=0; i<300; ++i){
        for(int j=0; j<300; ++j){
            getScreenBuffer().mutex.lock();
            if(getScreenBuffer().used == 1)
                getScreenBuffer().bufferIsEmpty.wait(&getScreenBuffer().mutex);
            QColor rgb(Qt::black);
            emit calculatedApixel(i,j,rgb);
            getScreenBuffer().bufferIsFull.wakeAll();
        }
    }
    return true;
}
