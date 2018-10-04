#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include "Point.h"

class Poligono
{
private:
    int n;
    Point p[100];
public:

    Poligono ();

    /**
     * @brief setN implementa o número de vertices do polígono
     * @param _n
     */
    void setN(int _n);

    /**
     * @brief getN retorna a quantidade de vertices do polígono
     * @return
     */
    int getN(void);

    /**
     * @brief setVertice aponta a localização do vertice no plano cartesiano
     * @param _x
     * @param _y
     */
    void setVertice(float _x, float _y);

    /**
     * @brief areaPoligono calcula e retorna a área do poligono
     * @return
     */
    float areaPoligono(void);

    /**
     * @brief transladaPoligono translada o polígono
     * @param a
     * @param b
     */
    void transladaPoligono(float a, float b);

    /**
     * @brief rotacionaPoligono rotaciona o poligono
     * @param ponto
     * @param theta
     */
    void rotacionaPoligono(Point ponto, float theta);

    /**
     * @brief imprimePoligono imprime o polígono
     */
    void imprimePoligono();
};

#endif // POLIGONO_H
