//retangulo.cpp -- Implementações dos métodos da classe Retangulo
#include "retangulo.h"

Retangulo::Retangulo() {}

Retangulo::Retangulo(int _x0, int _y0, int _largura, int _altura, int _fillmode, char _brush)
{
    x0 = _x0;
    y0 = _y0;
    largura = _largura;
    altura = _altura;
    fillmode = _fillmode;
    brush = _brush;
}       //construtor padrão
