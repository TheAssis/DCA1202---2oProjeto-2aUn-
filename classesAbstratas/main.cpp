#include <iostream>
#include <fstream> // imprimir em txt

#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "parser.h"


using namespace std;

int main() {
    //teste de desenho via função principal (main).
    Screen tela(35,35);

    tela.setBrush('&');
    tela.setPixel(0,1);

    //cout << tela;

    Retangulo *ret = new Retangulo (0,2,5,5,10,'*');
    ret->draw(tela);

    Reta *reta = new Reta (0, 0, 55, 10, '%');
    reta->draw(tela);

    Circulo *circulizinho = new Circulo (10,23,9,1,'$');
    circulizinho->draw(tela);

    cout << tela;

    ofstream fout; //para teste de impressão em txt do que foi colocado via função principal
    fout.open("C:\\Users\\SALA DE AULA\\Documents\\Assis\\registro_de_impressao.txt"); //caminho do arquivo onde vai ser
    if(!fout.is_open()){                                                               //desenhado
        cout << "arquivo nao foi aberto";
        exit(0);
    }
    else{
        fout<<tela;
    }
    fout.close();
    delete reta;
    delete ret;

    //fim do teste via função main
    
    //início do teste via parser
    Parser leitor;
    leitor.exec("C:\\Users\\SALA DE AULA\\Documents\\Assis\\teste.txt"); //caminho do arquivo onde estarão as instruções de desenho
    cout<<tela;

    Screen telaFILE(20,20);

    ofstream foutFILE; //para teste de impressão em txt
    foutFILE.open("C:\\Users\\SALA DE AULA\\Documents\\Assis\\registro_de_impressaoFILE.txt"); //caminho do arquivo onde vai ser
    if(!foutFILE.is_open()){                                                                   //desenhado.
        cout << "arquivo sdajlfkshfjlkçh nao foi aberto";
        exit(0);
    }
    else{
        foutFILE<<leitor.gravar(telaFILE);
    }
    
    //fim do teste via parser
    return 0;
}
