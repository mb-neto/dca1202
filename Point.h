#ifndef PONTO_H
#define PONTO_H
#include <iostream>

class Point{
private:
    float x, y, norm;
public:
    /**
     * @brief Point é um construtor para caso não sejam fornecidos
     * valores as coordenadas x e y
     * @param _x
     * @param _y
     */
    Point(float _x = 0, float _y=0);

    /**
     * @brief setX permite que o usuário possa acessar a variável privada x
     * @param _x
     */
    void setX(float _x);

    /**
     * @brief setY permite que o usuário possa acessar a variável privada y
     * @param _y
     */
    void setY(float _y);

    /**
    * @brief setXY permite que o usuário possa acessar tanto a variável privada x quanto a y
    * @param _x
    * @param _y
    */
   void setXY(float _x, float _y);

   /**
    * @brief getX retorna a coordenada x
    * @return
    */
   float getX();

   /**
    * @brief getY retorna a coordenada y
    * @return
    */
   float getY();

   /**
    * @brief add adiciona as coordenadas (x, y) do ponto com as coordenadas
    * de um ponto P1 (x1,y1)
    * @param p1
    */
   void add(Point p1);

   /**
    * @brief sub subtrai as coordenadas (x, y) do ponto com as coordenadas
    * de um ponto P1 (x1,y1)
    * @param p1
    */
   void sub(Point p1);

   /**
    * @brief norma calcula a norma de ponto a ponto
    */
   void norma();

   /**
    * @brief translada permite a translação do ponto em (x+a, y+b)
    * @param a
    * @param b
    */
   void translada(float a, float b);

   /**
    * @brief imprime permite imprimir na tela as coordenadas do ponto na forma (xpos, ypos)
    */
   void imprime();
};
#endif // PONTO_H
