//reta.cpp -- Implementações dos métodos da classe reta
#include "reta.h"

int Sinal(int x){
    if(x>0)
        return 1;
    else{
        if(x<0)
            return -1;
        else
            return 0;
    }
}

Reta::Reta() {}   //construtor padrão

Reta::Reta(int _x1, int _y1, int _x2, int _y2, char _brush){ // construtor com argumentos
    x1 = _x1;
    x2 = _x2;
    y1 = _y1;
    y2 = _y2;
    brush = _brush;
}

void Reta::draw(Screen &t)
{
    int Troca;
    int x = x1;
    int y = y1;
    int Delta_x = abs(x2 - x1);
    int Delta_y = abs(y2 - y1);
    int s1=Sinal(x2 - x1);
    int s2=Sinal(y2 - y1);
    if(Delta_y > Delta_x){
        int Temp = Delta_x;
        Delta_x = Delta_y;
        Delta_y = Temp;
        Troca = 1;
    }
    else{
        Troca = 0;
    }
    int new_e = 2*Delta_y - Delta_x;
    for(int i=1; i<= Delta_x; i++){
        t.setPixel(x,y);
        while (new_e >= 0){
            if(Troca == 1){
                //Muda para a proxima linha de rasterização
                x = x + s1;
            }
            else{
                y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
        }

        //Permanece nesta linha de rasterização
        if(Troca == 1){
            y = y + s2;
        }
        else{
            x = x + s1;
        }
        new_e= new_e + 2*Delta_y;
    }
}   
