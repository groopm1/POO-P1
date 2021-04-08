#ifndef LISTA_LIVRO_H
#define LISTA_LIVRO_H
#include "Livro.h"
#define tam 20

class Lista_Livro
{
    public:
        Lista_Livro();
        virtual ~Lista_Livro();

        bool inserir_livro(Livro x);
        bool remover(string nome);
        void imprimir_livros();

    private:
        Livro lst[tam];
        int qnt;
};

#endif // LISTA_LIVRO_H
