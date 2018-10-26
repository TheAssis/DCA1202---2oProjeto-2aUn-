//reta.h -- Classe concreta que abarca o protótipo de Reta
#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"


class Reta : public FiguraGeometrica
{
private:
    int x1,y1,x2,y2;

public:
    Reta();
    Reta(int _x1,int _y1, int _x2, int _y2, char _brush);
    void draw(Screen &t);
};

#endif // RETA_H
