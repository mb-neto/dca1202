#ifndef PONTO_H
#define PONTO_H
#include <iostream>

/**
 * @brief A classe <i>Point</i> define as características e operações que são possíveis
 * realizar com pontos do plano cartesiano.
 */
class Point{
private:
    float x, y, norm;
public:
    /**
     * @brief <i>Point</i> é um construtor da classe para atribuir valores as coordenadas x e y, onde,
     * caso não fornecido valores, assume-se que x e y recebem o valor de 0.
     * @param _x é a coordenada x do ponto no plano cartesiano.
     * @param _y é a coordenada y do ponto no plano cartesiano.
     */
    Point(float _x = 0, float _y=0);

    /**
     * @brief A função <i>setX</i> permite que o usuário possa atribuir valores a variável privada x.
     * @param _x é o valor atribuído a variável privada x.
     */
    void setX(float _x);

    /**
     * @brief A função <i>setY</i> permite que o usuário possa atribuir valores a variável privada y.
     * @param _y é o valor atribuído a variável privada y.
     */
    void setY(float _y);

    /**
    * @brief Em <i>setXY</i>, o usuário tem a disponibilidade de atribuir valores, respectivamente, as variáveis privada x e y.
    * @param _x é o valor atribuído a variável privada x.
    * @param _y é o valor atribuído a variável privada y.
    */
   void setXY(float _x, float _y);

   /**
    * @brief A função <i>getX</i> retorna a coordenada x.
    * @return
    */
   float getX();

   /**
    * @brief A função <i>getY</i> retorna a coordenada y.
    * @return
    */
   float getY();

   /**
    * @brief É atribuída a função <i>add</i> a utilidade de adicionar às coordenadas (x, y) do ponto os valores das coordenadas
    * de um ponto <b>P1(x1,y1)</b>.
    * @param p1 é um ponto para utilizado para fins de soma de suas coordenadas (x,y) ás coordenadas (x,y) do ponto o qual chama a função.
    */
   void add(Point p1);

   /**
    * @brief É atribuída a função <i>sub</i> a utilidade de subtrair às coordenadas (x, y) do ponto os valores das coordenadas
    * de um ponto <b>P1(x1,y1)</b>.
    * @param p1 é um ponto para utilizado para fins de soma de suas coordenadas (x,y) ás coordenadas (x,y) do ponto o qual chama a função.
    */
   void sub(Point p1);

   /**
    * @brief A função <i>norma</i> calcula a norma de ponto a ponto.
    */
   void norma();

   /**
    * @brief A função <i>translada</i> permite a translação do ponto em (x+a, y+b).
    * @param a e b são os valores que identificam o quanto deve ser transladado o ponto.
    */
   void translada(float a, float b);

   /**
    * @brief A função <i>imprime</i> permite imprimir na tela as coordenadas do ponto na forma (xpos, ypos).
    */
   void imprime();
};
#endif // PONTO_H
