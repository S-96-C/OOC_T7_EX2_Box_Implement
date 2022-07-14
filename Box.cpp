#include "Box.h"

void Box::setWidth(int w){
  width = w;
}

int Box::getWidth(){
  return width;
}

void Box::setHeight(int h){
  height = h;
}

int Box::getHeight(){
  return height;
}

void Box::setLength(int l){
  length = l;
}

int Box::getLength(){
  return length;
}

int Box::calcVolume(){
  return width*height*length;
}


