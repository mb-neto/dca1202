#ifndef PONTO_H
#define PONTO_H
#include <iostream>
#include "Point.h"

class Point{
private:
    float x, y,n;
public:
    // permite que o usuário possa acessar a variável privada x
    void setX(float _x);

    // permite que o usuário possa acessar a variável privada y
    void setY(float _y);

    //permite que o usuário possa acessar tanto a variável privada x quanto a y
   void setXY(float _x, float _y);

   // retorna a coordenada x
   float getX();

   // retorna a coordenada y
   float getY();

   // adiciona as coordenadas (x, y) do ponto com as coordenadas de um ponto P1 (x1,y1)
   void add(Point p1);

    // subtrai as coordenadas (x, y) do ponto com as coordenadas de um ponto P1 (x1,y1)
   void sub(Point p1);

   // calcula a norma do ponto em relação a origem de coordenadas
   void norma();

   // translada o ponto em (x+a, y+b)
   void translada(float a, float b);

   // imprime as coordenadas do ponto na forma (xpos, ypos)
   void imprime();
};

#endif // PONTO_H
