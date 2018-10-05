#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include "Poligono.h"

/**
 * @brief A classe <i>Retangulo</i> define como é constituído um retângulo qualquer e suas características, que como
 * um polígono, tem estrutura e funcionalidades similares a classe <i>Poligono</i>, herdando-a.
 */
class Retangulo : public Poligono
{
private:
    float xr, yr, largura, altura;
public:
    /**
     * @brief <i>Retangulo</i> é uma função construtora para determinar os valores iniciais
     *  das características que qualificam o polígono Retângulo.
     * @param _xr é a variável de valor corresponde a coordenada x do ponto superior esquerdo do Retângulo.
     * @param _yr é a variável de valor corresponde a coordenada y do ponto superior esquerdo do Retângulo.
     * @param _largura é o valor da largura do Retângulo.
     * @param _altura é o valor da altura do Retângulo.
     */
    Retangulo(float _xr, float _yr, float _largura, float _altura);
};

#endif // RETANGULO_H
