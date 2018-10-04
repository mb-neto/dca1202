#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point(float _x, float _y){
    x = _x;
    y = _y;
}

void Point::setX(float _x){
    x= _x;
}

void Point::setY(float _y){
    y= _y;
}
void Point::setXY(float _x, float _y){
    setX(_x);
    setY(_y);
}
float Point::getX(){
     return x;
}
float Point::getY(){
     return y;
}
void Point::add(Point p1){
     x= x+p1.getX();
     y= y+p1.getY();
}
void Point::sub(Point p1){
     x= x-p1.getX();
     y= y-p1.getY();
}
void Point::norma(){
       norm = sqrt(x*x + y*y);
}
void Point::translada(float a, float b){
       x= x+a;
       y= y+b;
}
void Point::imprime(){
       cout << "(" << x << ", " << y << ")";
}

