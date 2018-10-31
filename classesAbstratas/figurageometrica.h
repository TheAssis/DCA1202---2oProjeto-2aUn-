//figurageometrica.h -- Classe abstrata que abarca o protótipo de FiguraGeometrica
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"         //necessário para que FiguraGeometrica saiba o que é um
                            //objeto do tipo Screen.
/** @brief Classe abstrata FiguraGeometrica, responsável por virtulizar o método
 * draw das suas classes herdeiras: Retangulo, Circulo e Reta.
 */
class FiguraGeometrica
{
protected:      //para que as classes herdeiras possam utilizar.
    /** @brief Variável do brush que pode ser acessada livremente pelas classes herdeiras
     * mesmo sendo privada para o restante do código.
     */
    char brush;

public:
    /** @brief Construtor padrão da classe FiguraGeometrica.
     */
    FiguraGeometrica();
    /** @brief Método virtual que por sua vez (e obviamente), não é definido
     * na classe FiguraGeometrica, mas executa o mesmo método virtual das
     * subclasses.
     */
    virtual void draw(Screen& t)=0; //método virtual puro (=0);

};

#endif // FIGURAGEOMETRICA_H
