#include "Filme.h"

ostream &operator<< (ostream &os, tempo &x)
{
    os <<x.h<<" : "<<x.m<<" : "<<x.s;
    return os;
}

Filme::Filme()
{
    //ctor
}

Filme::~Filme()
{
    //dtor
}

Filme :: Filme(string nome, string genero, string produtora, int ano, int class_indicativa, tempo duracao, string diretor)
{
    this -> set_nome(nome);
    this -> set_genero(genero);
    this -> set_produtora(produtora);
    this -> set_ano(ano);
    this -> set_class(class_indicativa);
    this -> duracao = duracao;
    this -> diretor = diretor;

}

void Filme :: imprimir_filme()
{
    this -> imprimir_midia();
    cout<<"\nDiretor: "<<this -> diretor;
    cout<<"\nDuração: "<<this -> duracao;
}
