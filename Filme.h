#ifndef FILME_H
#define FILME_H
#include <Midia.h>

struct tempo
{
    int h, m, s;
};

class Filme : public Midia
{
    public:
        Filme();
        virtual ~Filme();
        Filme(string nome, string genero, string produtora, int ano, int class_indicativa, tempo duracao, string diretor);
        void imprimir_filme();

    private:
        tempo duracao;
        string diretor;
};

#endif // FILME_H
