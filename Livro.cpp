#include "Livro.h"

Livro::Livro()
{
    //ctor
}

Livro::~Livro()
{
    //dtor
}

Livro :: Livro(string nome, string genero, string produtora, int ano, int class_indicativa, int pag, string escritor)
{
    this -> set_nome(nome);
    this -> set_genero(genero);
    this -> set_produtora(produtora);
    this -> set_ano(ano);
    this -> set_class(class_indicativa);
    this -> pag = pag;
    this -> escritor = escritor;
}

void Livro :: imprimir_livro()
{
    this -> imprimir_midia();
    cout<<"\nAutor: "<<this -> escritor;
    cout<<"\nNúmero de páginas: "<<this -> pag;
}
