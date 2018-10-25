//circulo.h -- Classe concreta que abarca o protótipo de Circulo
#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"


class Circulo : public FiguraGeometrica
{
private:
    int x0, y0, raio, fillmode;
    char brush;
public:
    Circulo();    
    Circulo(int _x0, int _y0, int _raio, int _fillmode, char _brush);
};

#endif // CIRCULO_H

