//figurageometrica.h -- Classe abstrata que abarca o protótipo de FiguraGeometrica
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"         //necessário para que FiguraGeometrica saiba o que é um
                            //objeto do tipo Screen.

class FiguraGeometrica
{
protected:      //para que as classes herdeiras possam utilizar.
    char brush;

public:
    FiguraGeometrica();
    virtual void draw(Screen& t)=0; //método virtual puro (=0);

};

#endif // FIGURAGEOMETRICA_H
