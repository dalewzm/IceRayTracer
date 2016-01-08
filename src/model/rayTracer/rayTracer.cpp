#include "rayTracer.h"

RayTracer::RayTracer()
{
  scenePtr = new Scene();
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
    for(int i=0; i<300; ++i){
        for(int j=0; j<300; ++j){
            QColor rgb(Qt::black);
            emit calculatedApixel(i,j,rgb);
        }
    }
}
