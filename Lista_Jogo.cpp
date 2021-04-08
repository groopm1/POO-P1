#include "Lista_Jogo.h"

Lista_Jogo::Lista_Jogo()
{
    this -> qnt = 0;
}

Lista_Jogo::~Lista_Jogo()
{
    //dtor
}

bool Lista_Jogo :: inserir_jogo(Jogo x)
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

bool Lista_Jogo :: remover(string nome)
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

void Lista_Jogo :: imprimir_jogos()
{
    for(int i = 0; i < this -> qnt; i++){
        this -> lst[i].imprimir_jogo();
        cout<<endl<<endl;
    }
}
