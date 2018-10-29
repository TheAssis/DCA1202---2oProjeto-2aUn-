#include <iostream>
#include <fstream> // para ifstream
#include <sstream> // para stringstream
#include <string> // para string
#include "parser.h"

#include "screen.h" //desenha-senuma tela
#include "circulo.h" // crio objetos circulo
#include "reta.h" // cria-se retas
#include "retangulo.h" //cria-se retangulos
#include "figurageometrica.h" //usa-se um vetor de figuras geometricas

using namespace std; //strings no escopo do std



Parser::Parser(){

}

Parser::Parser(string _caminho){
    caminho = _caminho;
}

void Parser::exec(string _caminho){
    caminho = _caminho;
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
        ss.str(linha);//ss = stringstream(linha);
        ss >> cmd;
       // cout << cmd << endl; //RETIRAR

        if(cmd.compare("dim") == 0){ // FALTA TRABALHAR AQUI
            int larg, alt;
            ss >> larg >> alt;
            tela = Screen(larg, alt);
        }
        else if(cmd.compare("rectangle") == 0){
            int x0, y0, larg, alt, tipo;
            string brush;
            ss >> x0 >> y0 >> larg >> alt >> tipo;
            ss >> brush;
            if(!ss.good()){
              //  cout << "brush = " << brush << endl; //RETIRAR
                brush = " ";
            }

            const char* local_brush = brush.c_str(); // conversão necessária: string -> const char* -> const char
            figuras.push_back(new Retangulo(x0,y0,larg, alt, tipo, *local_brush));
        }

        else if(cmd.compare("circle") == 0){
            int x0, y0, raio, tipo;
            string brush;
            ss >> x0 >> y0 >> raio >> tipo;
            ss >> brush;
            if(!ss.good()){
              //  cout << "brush = " << brush << endl; //RETIRAR
                brush = " ";
            }

            const char* local_brush = brush.c_str(); // conversão necessária: string -> const char* -> const char
            figuras.push_back(new Circulo(x0,y0,raio, tipo, *local_brush));
        }
        else if(cmd.compare("line") == 0){
           int x0, y0, x1, y1;
           string brush;
           ss >> x0 >> y0 >> x1 >> y1;
           ss >> brush;
           if(!ss.good()){
             //  cout << "brush = " << brush << endl; //RETIRAR
               brush = " ";
           }

           const char* local_brush = brush.c_str(); // conversão necessária: string -> const char* -> const char
           figuras.push_back(new Reta(x0,y0,x1,y1, *local_brush));
        }

    }

    fin.close();
    // fim da leitura, agora irei desenhar


    for(int i = 0; i < figuras.size(); i++){
    //cout<<"ja cheguei no desenhador";
        figuras[i]->draw(tela);
    }
    cout<<tela;
}

Screen& Parser::gravar(Screen &tela_de_gravacao){
    for(int i = 0; i < figuras.size(); i++){
    //cout<<"ja cheguei no desenhador";
        figuras[i]->draw(tela_de_gravacao);
    }
    // código responsável por printar na tela ou gravar em txt. Ou seja, conecta o resultado do desenho a um fluxo de saída
    return tela_de_gravacao;
}
