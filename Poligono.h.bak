#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include "Point.h"

/**
 * @brief A classe <i>Poligono</i> define a estrutura e funcionalidades de um polígono, contituindo-se
 * como um conjunto de pontos que, quando manipulado corretamente, é possível realizar-se operações de calculo
 * de área, transladar o polígono ou até mesmo rotacioná-lo.
 */
class Poligono
{
private:
    int n;
    Point p[100];
public:

    Poligono ();

    /**
     * @brief Em <i>setN</i> implementa-se o número de vertices do polígono.
     * @param _n corresponde ao número de vertices.
     */
    void setN(int _n);

    /**
     * @brief <i>getN</i> retorna a quantidade de vertices do polígono.
     * @return
     */
    int getN(void);

    /**
     * @brief <i>setVertice</i> aponta a localização do vertice no plano cartesiano.
     * @param _x é o valor da coordenada x do vertice.
     * @param _y é o valor da coordenada y do vertice.
     */
    void setVertice(float _x, float _y);

    /**
     * @brief A função <i>areaPoligono</i> calcula e retorna a área do poligono prevista a partir do método para encontrar-se
     *  a <a href= "https://pt.wikihow.com/Calcular-a-%C3%81rea-de-um-Pol%C3%ADgono"> area de um poligono irregular</a>.
     * @return
     */
    float areaPoligono(void);

    /**
     * @brief Em <i>transladaPoligono</i> é possível transladar o polígono para (+a,+b).
     * @param a e b são os valores somados a conjutura do polígono para translada-lo.
     */
    void transladaPoligono(float a, float b);

    /**
     * @brief A função <i>rotacionaPoligono</i> rotaciona o polígono em theta graus em relação a um ponto.
     * @param ponto corresponde ao ponto de referência para rotação do polígono.
     * @param theta é a angulação de rotação desejada em relação ao ponto fornecido.
     */
    void rotacionaPoligono(Point ponto, float theta);

    /**
     * @brief A função <i>imprimePoligono</i> imprime as coordenadas dos pontos que constituem o polígono,
     * distribuídos em ordem anti-horária.
     */
    void imprimePoligono();
};

#endif // POLIGONO_H
