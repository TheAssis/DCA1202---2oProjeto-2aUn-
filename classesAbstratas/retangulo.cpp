//retangulo.cpp -- Implementações dos métodos da classe Retangulo
#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo() {}   //construtor padrão

Retangulo::Retangulo(int _x0, int _y0, int _largura, int _altura, int _fillmode, char _brush)
{
    x0 = _x0;
    y0 = _y0;
    largura = _largura;
    altura = _altura;
    fillmode = _fillmode;
    brush = _brush;     //o brush é da superclasse FiguraGeometrica.
}

void Retangulo::draw(Screen &t){
    t.setBrush(brush);

    //desenhando as bordas
    Reta *reta_cima = new Reta (x0, y0, x0+largura, y0, brush);
    Reta *reta_baixo = new Reta (x0, y0+altura,x0+largura ,y0+altura , brush);
    Reta *reta_esquerda = new Reta (x0,y0 ,x0 ,y0+altura , brush);
    Reta *reta_direita = new Reta (x0+largura,y0 , x0+largura,y0+altura , brush);

    reta_cima->draw(t);
    reta_baixo->draw(t);
    reta_esquerda->draw(t);
    reta_direita->draw(t);
    t.setPixel(x0+largura,y0+altura); //sem essa linha, o pixel do canto inferior direito não aparece

    //preenchendo (se necessário)
    if(fillmode>0){
        for(int i =0;i<largura; i++){
            for(int j =0; j<altura; j++){
                t.setPixel(x0+i,y0+j);
            }
        }
    }

}

