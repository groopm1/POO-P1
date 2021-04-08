#include "Jogo.h"

Jogo::Jogo()
{
    //ctor
}

Jogo::~Jogo()
{
    //dtor
}

Jogo :: Jogo (string camera, string perspectiva, Plataforma plataforma, string nome, string genero, string produtora, int ano, int class_indicativa)
{
    this -> camera = camera;
    this -> perspectiva = perspectiva;
    this -> plataforma = plataforma;
    this -> set_nome(nome);
    this -> set_ano(ano);
    this -> set_class(class_indicativa);
    this -> set_genero(genero);
    this -> set_produtora(produtora);
}

void Jogo :: imprimir_jogo()
{
    this -> imprimir_midia();
    cout<<"\nTipo de câmera: "<<this -> camera;
    cout<<"\nTipo de perspectiva: "<<this -> perspectiva;
    cout<<"\nPlataforma: ";
    if(plataforma.console == true and plataforma.pc == true){
        cout<<"PC e console";
    }
    else if(plataforma.console == true){
        cout<<"Console";
    }
    else{
        cout<<"PC";
    }
}
