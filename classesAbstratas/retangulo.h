//retangulo.h -- Classe concreta que abarca o protótipo de Retangulo
#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"


class Retangulo : public FiguraGeometrica
{
private:
    int x0, y0, largura, altura, fillmode;
    char brush;
public:
    Retangulo();
    Retangulo(int _x0,int _y0,int _largura,int _altura,int _fillmode,char _brush);
};

#endif // RETANGULO_H
