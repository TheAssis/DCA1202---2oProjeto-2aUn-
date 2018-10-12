//figurageometrica.h -- Classe abstrata que abarca o protótipo de FiguraGeometrica
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"         //necessário para que FiguraGeometrica saiba o que é um
                            //objeto do tipo Screen.

class FiguraGeometrica
{

public:
    FiguraGeometrica();
    virtual void draw(Screen& t);

};

#endif // FIGURAGEOMETRICA_H
