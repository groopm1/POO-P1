#include "Midia.h"

Midia::Midia()
{
    //ctor
}

Midia::~Midia()
{
    //dtor
}

void Midia :: set_ano(int ano)
{
    this -> ano = ano;
}

void Midia :: set_class(int classi)
{
    this -> class_indicativa = classi;
}

void Midia :: set_produtora(string produtora)
{
    this -> produtora = produtora;
}

void Midia :: set_genero(string genero)
{
    this -> genero = genero;
}

void Midia :: set_nome(string nome)
{
    this -> nome = nome;
}

string Midia :: get_nome()
{
    return this -> nome;
}

string Midia :: get_genero()
{
    return this-> genero;
}

string Midia :: get_produtora()
{
    return this-> produtora;
}

int Midia :: get_ano()
{
    return this-> ano;
}

int Midia :: get_class_indicativa()
{
    return this-> class_indicativa;
}

void Midia :: imprimir_midia()
{
    cout<<"Nome: "<<this -> get_nome();
    cout<<"\nGênero: "<<this -> get_genero();
    cout<<"\nAno: "<<this -> get_ano();
    cout<<"\nProdutora: "<<this -> get_produtora();
    cout<<"\nClassificação indicativa: "<<this -> get_class_indicativa()<<"+";
}
