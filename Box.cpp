#include "Box.h"

// Implement setters and getters

int Box::setlength(int l) 
{
  length=1;
}
void Box::setWidth(int w)
{
  width=w;
}
void Box::setHeight(int h)
{
  height=h;
}
int Box::getLength;
{
  return length;
}
int Box::getWidth;
{
  return Width;
}
int Box::getHeight;
{
  return height;
}

int Box::calcvolume(){
  return length*width*height;
}