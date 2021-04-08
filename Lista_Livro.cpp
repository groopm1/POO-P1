#include "Lista_Livro.h"

Lista_Livro::Lista_Livro()
{
    this -> qnt = 0;
}

Lista_Livro::~Lista_Livro()
{
    //dtor
}


bool Lista_Livro :: inserir_livro(Livro x)
{
    if(this -> qnt >= tam){
        return false;
    }

    else{
        this -> lst[this -> qnt] = x;
        this -> qnt ++;
        return true;
        }
}

bool Lista_Livro :: remover(string nome)
{
    if(this -> qnt == 0){
        return false;
    }

    int i = 0;

    while (this -> lst[i].get_nome() != nome and i < this -> qnt){
        i++;
    }

    if(i >= this -> qnt){
        return false;
    }

    else{
        int j;
        for(j = i + 1; j < this -> qnt; j++){
            this -> lst[j - 1] = this -> lst[j];
        }

        this -> qnt--;

        return true;
    }

}

void Lista_Livro :: imprimir_livros()
{
    for(int i = 0; i < this -> qnt; i++){
        this -> lst[i].imprimir_livro();
        cout<<endl<<endl;
    }
}
