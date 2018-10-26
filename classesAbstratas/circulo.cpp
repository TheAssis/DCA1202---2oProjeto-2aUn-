//circulo.cpp -- Implementações dos métodos da classe Circulo
#include "circulo.h"

Circulo::Circulo() {}   //construtor padrão.

Circulo::Circulo(int _x0, int _y0, int _raio, int _fillmode, char _brush)
{
    x0 = _x0;
    y0 = _y0;
    raio = _raio;
    fillmode = _fillmode;
    brush = _brush;     //o brush é da superclasse FiguraGeometrica.
}
