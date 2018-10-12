#include<iostream>
#include<vector>

using namespace std;

class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor da classe
  Screen(int nlin, int ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  // envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);
};

void Screen::setBrush(char _brush){
    brush = _brush;
}

// a linha abaixo é apenas pro compilador não reclamar da falta da main
int main(){}
