#ifndef JOGO_H
#define JOGO_H
#include <Midia.h>

struct Plataforma
{
    bool pc;
    bool console;
};

class Jogo : public Midia
{
    public:
        Jogo();
        Jogo (string camera, string perspectiva, Plataforma plataforma, string nome, string genero, string produtora, int ano, int class_indicativa);
        virtual ~Jogo();

        void imprimir_jogo();

    private:
        string camera, perspectiva;
        Plataforma plataforma;
};

#endif // JOGO_H
