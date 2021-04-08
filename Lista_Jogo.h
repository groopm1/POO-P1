#ifndef LISTA_JOGO_H
#define LISTA_JOGO_H
#include "Jogo.h"
#define tam 20

class Lista_Jogo
{
    public:
        Lista_Jogo();
        virtual ~Lista_Jogo();

        bool inserir_jogo(Jogo x);
        bool remover(string nome);
        void imprimir_jogos();

    private:
        Jogo lst[tam];
        int qnt;
};

#endif // LISTA_JOGO_H
