#ifndef LISTA_FILME_H
#define LISTA_FILME_H
#include "Filme.h"
#define tam 20

class Lista_Filme
{
    public:
        Lista_Filme();
        virtual ~Lista_Filme();

        bool inserir_filme(Filme x);
        bool remover(string nome);
        void imprimir_filmes();

    private:
        Filme lst[tam];
        int qnt;
};

#endif // LISTA_FILME_H
