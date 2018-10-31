//circulo.h -- Classe concreta que abarca o protótipo de Circulo
#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

/**
  @brief Subclasse da classe FiguraGeometrica e responsável por desenhar círculos, preenchidos ou não, na tela
*/
class Circulo : public FiguraGeometrica
{
private:
    int x0, y0, raio, fillmode;

public:
    Circulo();
    /** @brief Construtor com parâmetros que inicializa as dimensões, posição inicial e
     * condição, se o círculo está preenchido ou não, e seu brush.
    */
    Circulo(int _x0, int _y0, int _raio, int _fillmode, char _brush);
    /** @brief Método que draw que é virtualizado pela classe FiguraGeometrica.
    */
    void draw(Screen &t);


};

#endif // CIRCULO_H
