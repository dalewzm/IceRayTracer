#include "screenPixel.h"

ScreenPixel::ScreenPixel():x(0),y(0),color(Qt::black)
{
}

ScreenPixel::ScreenPixel(int px,int py, QColor rgb)
  :x(px),y(py),color(rgb)
{
}

void ScreenPixel::X(int px)
{
  x =px;
}

int ScreenPixel::X()
{
  return x;
}

void ScreenPixel::Y(int py)
{
  y = py;
}

int ScreenPixel::Y()
{
  return y;
}


void ScreenPixel::Color(QColor c)
{
  color = c;
}

QColor ScreenPixel::Color()
{
  return color;
}
