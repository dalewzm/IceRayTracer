#ifndef __ICERAYTRACER_SCREENPIXEL_H__
#define __ICERAYTRACER_SCREENPIXEL_H__
#include <QColor>
class ScreenPixel{
 public:
  ScreenPixel();
  ScreenPixel(int ,int ,QColor);
  void X(int px);
  int X();
  void Y(int py);
  int  Y();
  void Color( QColor c);
  QColor Color();
 private:
  int x;
  int y;
  QColor color;
};


#endif
