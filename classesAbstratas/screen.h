//screen.h -- Protótipo da classe Screen.
#ifndef SCREEN_H
#define SCREEN_H


class Screen
{

private:
    int nlin, ncol;     //armazena as dimensões da tela.
    char brush;         //armazena o caractere utilizado para desenhar.
    vector< vector<char> >;//armazena a matriz que representa a tela.

public:
    Screen(void);
    void setPixel(int x, int y); //desenha apenas UM pixel utilizando o caractere em brush.
    void clear(void);            //limpa a tela.
    void setBrush(char brush);   //Altera o caractere de desenho.
    friend ostream& operator<<(ostream& os, Screen& t);//sobrecarga do cout << pra imprimir
                                                       //a tela por um stream de saída.
};


#endif // SCREEN_H
