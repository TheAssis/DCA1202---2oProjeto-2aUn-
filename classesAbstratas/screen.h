//screen.h -- Protótipo da classe Screen.
#ifndef SCREEN_H
#define SCREEN_H
#include <vector>       //para poder usar vector
#include <ostream>      //para poder usar ostream

using namespace std;


/** @brief Classe que abarca a tela propriamente dita (uma matriz de char) e
 * realiza as operações de desenho de pixeis, limpeza da tela e alteração do
 * brush.
 */
class Screen
{

private:
    /** @brief Dimensões da matriz que representará a tela.
     */
    int nlin, ncol;     //armazena as dimensões da tela.
    char brush;         //armazena o caractere utilizado para desenhar.
    vector< vector<char> > mat;//armazena a matriz que representa a tela.

public:
    Screen();
    /** @brief Construtor que seta as dimensões da matriz que representa a tela.
     */
    Screen(int _nlin, int _ncol);
    /** @brief Método encabido de desenhar o brush representando um pixel na tela
     * na localização (x,y).
     */
    void setPixel(int x, int y); //desenha apenas UM pixel utilizando o caractere em brush.
    /** @brief Limpa a tela, preenchendo toda ela com o caractere espaço/' '.
     */
    void clear(void);            //limpa a tela.
    /** @brief Define qual é o caractere que será utilizado para desenhar na
     * tela.
     */
    void setBrush(char brush);   //Altera o caractere de desenho.
    /** @brief Sobrecarga do operador '<<' que permitirá que a tela seja printada
     * sem muitas dificuldades e utilizando o cout <<.
     */
    friend ostream& operator<<(ostream& os, Screen& t); //sobrecarga do cout << pra imprimir
                                                       //a tela por um stream de saída.

};


#endif // SCREEN_H
