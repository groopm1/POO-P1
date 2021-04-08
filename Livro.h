#ifndef LIVRO_H
#define LIVRO_H

#include <Midia.h>


class Livro : public Midia
{
    public:
        Livro();
        virtual ~Livro();
        Livro(string nome, string genero, string produtora, int ano, int class_indicativa, int pag, string escritor);
        void imprimir_livro();

    private:
        int pag;
        string escritor;
};

#endif // LIVRO_H
