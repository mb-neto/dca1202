#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include "Poligono.h"

class Retangulo : public Poligono
{
private:
    float xr, yr, largura, altura;
public:
    Retangulo(float _xr, float _yr, float _largura, float _altura);
};

#endif // RETANGULO_H
