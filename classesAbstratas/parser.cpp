#include <iostream>
#include <fstream> // para ifstream
#include <sstream> // para stringstream
#include <string> // para string
#include "parser.h"

#include "screen.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include "figurageometrica.h"

using namespace std; //strings no escopo do std

Parser::Parser(){

}

Parser::Parser(string _caminho){
    caminho = _caminho;
}

void Parser::ler_arquivo(string caminho){

    ifstream fin; //objeto conectado ao fluxo de saída
    string linha; //linha de comando encontrada no arquivo .txt
    string cmd;   //comando encontrado no arquivo .txt
    stringstream ss; //objeto responsável pela leitura de cada palavra do arquivo de texto
    Screen tela;

    fin.open(caminho);
    if(!fin.is_open()){
        cout << "Falha na abertura do arquivo. Caminho especificado correto? \n";
    }


    while(fin.good()){
        getline(fin,linha);
        if(!fin.good()){
            break;
        }
        linha += " ";
        ss = stringstream(linha);
        ss >> cmd;
        cout << cmd << endl;

        if(cmd.compare("dim") == 0){
            int larg, alt;
            ss >> larg >> alt;
            tela = Screen(larg, alt);

        }
        else if(cmd.compare("rectangle") == 0){
            int x0, y0, larg, alt, tipo;
            string brush;
            ss >> x0 >> y0 >> larg >> alt >> tipo;
            ss >> brush;
            if(ss.good()){
                cout << "brush = " << brush << endl;
            }
            else{
                brush = " ";
                cout << "brush = espaco\n";
            }
            //    armazenamento = new Rectangle(x0, y0, larg, alt, tipo, brush);
        }
        else if(cmd.compare("circle") == 0){
            int x0, y0, raio, tipo;
            string brush;
            ss >> x0 >> y0 >> raio >> tipo;
            ss >> brush;
            if(ss.good()){
                cout << "brush = " << brush << endl;
            }
            else{
                brush = " ";
                cout << "brush = espaco\n";
            }
        }

    }

    fin.close();
}
