//retangulo.h -- Classe concreta que abarca o protótipo de Retangulo
#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

/** @brief Subclasse da classe FiguraGeometrica e responsável por desenhar retângulos,
 * preenchidos ou não, na tela.
 */
class Retangulo : public FiguraGeometrica
{
private:
    int x0, y0, largura, altura, fillmode;

public:
    /** @brief Construtor padrão.
     */
    Retangulo();
    /** @brief Construtor que define as dimensões do retângulo a partir do ponto extremo
     * superior esquerdo, bem como o fato de estar ou não preenchido e o seu brush.
     */
    Retangulo(int _x0, int _y0, int _largura, int _altura, int _fillmode, char _brush);
    /** @brief Método virtualizado que neste caso desenha um retângulo na tela.
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
