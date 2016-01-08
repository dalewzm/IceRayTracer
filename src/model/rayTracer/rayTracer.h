#ifndef __ICERAYTRACER_RAYTRACER_H__
#define __ICERAYTRACER_RAYTRACER_H__
#include<QThread>
#include<QObject>
#include<QColor>
#include<QString>
#include "../sceneParser/parser.h"
#include "../sceneParser/scene.h"
class RayTracer:public QThread{
  Q_OBJECT
 public:
  RayTracer();
  ~RayTracer();
 public:
  bool loadSceneFile(QString filePath);
  void run();
private:
  bool buildScene();
 signals:
  void calculatedApixel(int x,int y,QColor rgb);
 private:
  Scene* scenePtr;
  Parser* parserPtr;
};



#endif
