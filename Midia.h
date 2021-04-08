#ifndef MIDIA_H
#define MIDIA_H
#include <iostream>
using namespace std;
class Midia
{
    public:
        Midia();
        virtual ~Midia();

        string get_nome();
        string get_genero();
        string get_produtora();
        int get_ano();
        int get_class_indicativa();
        void imprimir_midia();
        void set_ano(int ano);
        void set_class(int classi);
        void set_produtora(string produtora);
        void set_genero(string genero);
        void set_nome(string nome);

    private:
        string nome, genero, produtora;
        int ano, class_indicativa;
};

#endif // MIDIA_H
