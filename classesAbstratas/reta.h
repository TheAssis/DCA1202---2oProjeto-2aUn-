//reta.h -- Classe concreta que abarca o protótipo de Reta
#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

/** @brief Subclasse da classe FiguraGeometrica e responsável por desenhar retas na tela.
 */
class Reta : public FiguraGeometrica
{
private:
    int x1,y1,x2,y2;

public:
    /** @brief Construtor padrão.
     */
    Reta();
    /** @brief Construtor responsável por definir os dois pontos - (_x1,_y1) e (_x2,_y2) -
     * pelos quais a reta passa, bem como o seu brush.
     */
    Reta(int _x1,int _y1, int _x2, int _y2, char _brush);
    /** @brief Método virtualizado responsável por desenhar uma reta da tela.
     */
    void draw(Screen &t);
};

#endif // RETA_H
