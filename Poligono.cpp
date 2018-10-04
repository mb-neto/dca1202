#include <iostream>
#include <cmath>
#include "Poligono.h"

using namespace std;

Poligono::Poligono()
{
    n = 0;
}

void Poligono::setN(int _n)
{
    n =_n;
}
int Poligono::getN(){
    return n;
}

void Poligono::setVertice(float _x, float _y){
    p[n].setX(_x);
    p[n].setY(_y);
    n++;
}



float Poligono::areaPoligono(){
    float somaPositiva=0, somaNegativa=0;
    int i, j=1;
    p[n]=p[0];
    for(i=0; i<n; i++){
        somaPositiva+=p[i].getX()*p[j].getY();
        j++;
    }
    j=1;
    for(i=0; i<n; i++){
        somaNegativa+=p[j].getX()*p[i].getY();
        j++;
    }
    return abs(somaPositiva-somaNegativa)/(2.0);
}

void Poligono::transladaPoligono(float a, float b){
    for(int i=0; i<n; i++){
        p[i].translada(a,b);
    }
}

void Poligono::rotacionaPoligono(Point ponto, float theta){
    double rad= (theta*M_PI)/180.;
    // transladando o poligono de maneira tal que
    // o ponto fique na origem
    if(ponto.getX()<0 && ponto.getY()<0){
        transladaPoligono(ponto.getX(), ponto.getY());
    }
    else if (ponto.getX()>0 && ponto.getY()>0){
        transladaPoligono(-ponto.getX(),-ponto.getY());
    }

    else if( ponto.getX()<0&& ponto.getY()>0){
        transladaPoligono(ponto.getX(), -ponto.getY());
    }
    else if( ponto.getX()>0 && ponto.getY()<0){
        transladaPoligono(-ponto.getX(),ponto.getY());
    }

    // rotacionando em torno a origem
    for(int i=0; i<=n; i++){
       p[i].setXY(  (p[i].getX()*cos(rad)-p[i].getY()*sin(rad)) , (p[i].getX()*sin(rad)+p[i].getY()*cos(rad)) );
    }

    // transladando o poligono de maneira tal que
    // o ponto volte para a sua coordenada inicial
    if(ponto.getX()<0 && ponto.getY()<0){
        transladaPoligono(-ponto.getX(), -ponto.getY());
    }
    else if (ponto.getX()>0 && ponto.getY()>0){
        transladaPoligono(ponto.getX(),ponto.getY());
    }

    else if( ponto.getX()<0&& ponto.getY()>0){
        transladaPoligono(-ponto.getX(), ponto.getY());
    }
    else if( ponto.getX()>0 && ponto.getY()<0){
        transladaPoligono(ponto.getX(),-ponto.getY());
    }

}

void Poligono::imprimePoligono(){
    for(int i=0; i<(n-1); i++){
        p[i].imprime();
        cout << " -> ";
    }

    p[n-1].imprime();
}
