#include <iostream>
#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo(float _xr, float _yr, float _largura, float _altura)
{
    xr = _xr;
    yr = _yr;
    largura = _largura;
    altura = _altura;
    Poligono::setVertice(_xr,_yr);
    Poligono::setVertice(_xr,_yr-_altura);
    Poligono::setVertice(_xr+_largura,_yr-_altura);
    Poligono::setVertice(_xr+_largura,_yr);
}
