#include <iostream>
using namespace std;
#include <locale.h>
#include "Lista_Filme.h"
#include "Lista_Livro.h"
#include "Lista_Jogo.h"

void precadastro(Lista_Filme &lst_filme, Lista_Jogo &lst_jogo, Lista_Livro &lst_livro)
{
    Plataforma plat;

    plat.console = true;
    plat.pc = false;
    Jogo j = Jogo("Primeira pessoa", "3D", plat, "The Last of Us", "Ação", "Naughty Dog", 2013, 18);
    lst_jogo.inserir_jogo(j);

    plat.console = true;
    plat.pc = true;
    j = Jogo("Terceira pessoa", "3D", plat, "Life is Strange", "Aventura", "DontNod", 2015, 14);
    lst_jogo.inserir_jogo(j);

    plat.console = false;
    plat.pc = true;
    j = Jogo("Terceira pessoa", "3D", plat, "League of Legends", "MOBA", "Riot Games", 2009, 10);
    lst_jogo.inserir_jogo(j);

    tempo t;
    t.h = 2;
    t.m = 58;
    t.s = 00;
    Filme f = Filme("Pulp Fiction", "Ação", "A Band Apart", 1994, 18, t, "Quentin Tarantino");
    lst_filme.inserir_filme(f);

    t.h = 2;
    t.m = 50;
    t.s = 00;
    f = Filme("The Godfather", "Drama", "Paramount", 1972, 18, t, "Francis Coppola");
    lst_filme.inserir_filme(f);

    t.h = 1;
    t.m = 42;
    t.s = 00;
    f = Filme("Gente Grande", "Comédia", "Columbia Pictures", 2010, 14, t, "Dennis Dugan");
    lst_filme.inserir_filme(f);

    Livro l = Livro("The Witcher", "Ação", "SuperNowa", 1992, 18, 384, "Andrzej Sapkowski");
    lst_livro.inserir_livro(l);

    l = Livro("O Chamado de Cthulhu", "Terror", " ", 1926, 18, 50, "H.P. Lovecraft");
    lst_livro.inserir_livro(l);

    l = Livro("It: A coisa", "Terror", "Bertrand Editora", 1986, 18, 695, "Stephen King");
    lst_livro.inserir_livro(l);

}

bool cadastro_filme(Lista_Filme &lst)
{
    cin.ignore();
    string nome;
    cout<<"Cadastro de filme:\nNome: ";
    getline(cin, nome);

    cout<<"Gênero: ";
    string gen;
    getline(cin, gen);

    cout<<"Diretor: ";
    string diretor;
    getline(cin, diretor);

    cout<<"Produtora: ";
    string produt;
    getline(cin, produt);

    cout<<"Ano de lançamento: ";
    int ano;
    cin>>ano;

    cout<<"Classificação indicativa: ";
    int classi;
    cin>>classi;

    tempo t;
    cout<<"Tempo:\n  H: ";
    cin>> t.h;
    cout<<"  m: ";
    cin>>t.m;
    cout<<"  s: ";
    cin>>t.s;

    Filme f = Filme(nome, gen, produt, ano, classi, t, diretor);
    if(lst.inserir_filme(f) == true){
        cout<<"\nFilme inserido com sucesso!\n";
        getchar();
        getchar();
        return true;
    }

    else{
        cout<<"\nAlgo deu errado. Tente novamente!\n";
        getchar();
        getchar();
        return false;
    }
}

bool cadastro_livro(Lista_Livro &lst)
{
    cin.ignore();
    string nome;
    cout<<"Cadastro de Livro:\nNome: ";
    getline(cin, nome);

    cout<<"Gênero: ";
    string gen;
    getline(cin, gen);

    cout<<"Escritor: ";
    string escritor;
    getline(cin, escritor);

    cout<<"Produtora: ";
    string produt;
    getline(cin, produt);

    cout<<"Ano de lançamento: ";
    int ano;
    cin>>ano;

    cout<<"Classificação indicativa: ";
    int classi;
    cin>>classi;

    cout<<"Número de páginas: ";
    int pg;
    cin>>pg;

    Livro l = Livro(nome, gen, produt, ano, classi, pg, escritor);
    if(lst.inserir_livro(l) == true){
        cout<<"\nLivro inserido com sucesso!\n";
        getchar();
        getchar();
        return true;
    }

    else{
        cout<<"\nAlgo deu errado. Tente novamente!\n";
        getchar();
        getchar();
        return false;
    }
}

bool cadastro_jogo(Lista_Jogo &lst)
{
    cin.ignore();
    string nome;
    cout<<"Cadastro de Jogo:\nNome: ";
    getline(cin, nome);

    cout<<"Gênero: ";
    string gen;
    getline(cin, gen);

    cout<<"Produtora: ";
    string produt;
    getline(cin, produt);

    cout<<"Ano de lançamento: ";
    int ano;
    cin>>ano;

    cout<<"Classificação indicativa: ";
    int classi;
    cin>>classi;

    cout<<"Estilo de câmera: ";
    cin.ignore();
    string cam;
    getline(cin, cam);

    cout<<"Perspectiva (2D, 3D): ";
    string prp;
    getline(cin, prp);

    Plataforma plat;
    char cont;

    cout<<"Plataforma:\nPC (s/n): ";
    cin>>cont;
    if (cont == 's'){
        plat.pc = true;
    }
    else{
        plat.pc = false;
    }

    cout<<"Console (s/n): ";
    cin>>cont;
    if (cont == 's'){
        plat.console = true;
    }
    else{
        plat.console = false;
    }

    Jogo j = Jogo(cam, prp, plat,nome, gen, produt, ano, classi);
    if(lst.inserir_jogo(j) == true){
        cout<<"\nJogo inserido com sucesso!\n";
        getchar();
        getchar();
        return true;
    }

    else{
        cout<<"\nAlgo deu errado. Tente novamente!\n";
        getchar();
        getchar();
        return false;
    }
}

template <typename X>
bool deletar(X &lst)
{
    cout<<"Remover item:\n";
    cout<<"Insira o nome do item: ";
    cin.ignore();
    string nome;
    getline(cin, nome);

    if(lst.remover(nome) == false){
        cout<<"\nAlgo deu errado. Tente novamente!\n";
        getchar();
        return false;
    }

    else{
        cout<<"\nItem removido com sucesso!\n";
        getchar();
        return true;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Lista_Filme lst_filmes = Lista_Filme();
    Lista_Jogo lst_jogos = Lista_Jogo();
    Lista_Livro lst_livros = Lista_Livro();

    precadastro(lst_filmes, lst_jogos, lst_livros);

    int controle;

    do{
        do{
            system ("clear || cls");
            cout<<"-----------------------------MENU-----------------------------";
            cout<<endl<<"Selecione a operação:\n1- Cadastrar item   2- Remover item   3- Visualizar listas   0- Sair\n";
            cin>>controle;
            if(controle < 0 or controle > 3){
                cout<<"\nOperação inválida!\n";
                getchar();
                getchar();
            }
        }while(controle < 0 or controle > 3);

        switch(controle){
            case 1:
                do{
                    system("clear || cls");
                    cout<<"Cadastrar item:\n1- Filme   2- Livro   3- Jogo\n";
                    cin>>controle;
                    if(controle < 1 or controle > 3){
                        cout<<"\nOperação inválida!\n";
                        getchar();
                        getchar();
                    }
                    cout<<endl;
                    system("clear || cls");
                }while(controle < 1 or controle > 3);

                switch(controle){
                    case 1:
                        cadastro_filme(lst_filmes);
                        break;
                    case 2 :
                        cadastro_livro(lst_livros);
                        break;
                    case 3:
                        cadastro_jogo(lst_jogos);
                        break;
                }

                break;
            case 2:
                do{
                    system("clear || cls");
                    cout<<"Remover item:\n1- Filme   2- Livro   3- Jogo\n";
                    cin>>controle;
                    if(controle < 1 or controle > 3){
                        cout<<"\nOperação inválida!\n";
                        getchar();
                        getchar();
                    }
                    cout<<endl;
                    system("clear || cls");
                }while(controle < 1 or controle > 3);

                switch(controle){
                    case 1:
                        deletar(lst_filmes);
                        break;
                    case 2 :
                        deletar(lst_livros);
                        break;
                    case 3:
                        deletar(lst_jogos);
                        break;
                }

                break;

            case 3:
                do{
                    system("clear || cls");
                    cout<<"Visualizar lista:\n1- Filmes   2- Livros   3- Jogos\n";
                    cin>>controle;
                    if(controle < 1 or controle > 3){
                        cout<<"\nOperação inválida!\n";
                        getchar();
                        getchar();
                    }
                    cout<<endl;
                }while(controle < 1 or controle > 3);

                switch(controle){
                    case 1:
                        lst_filmes.imprimir_filmes();
                        getchar();
                        getchar();
                        break;
                    case 2 :
                        lst_livros.imprimir_livros();
                        getchar();
                        getchar();
                        break;
                    case 3:
                        lst_jogos.imprimir_jogos();
                        getchar();
                        getchar();
                        break;
                }

                break;
        }

    }while(controle != 0);

    return 0;
}
