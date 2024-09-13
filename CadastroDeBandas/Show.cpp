#include "Show.h"

Show *Show::CadastrarShow(Show *T, std::string nome, std::string local, int cache, int publico, int ingresso){
    Show *aux = new Show();
    aux->nome = nome;
    aux->local = local;
    aux->cache = cache;
    aux-> publico = publico;
    aux->ingresso = ingresso;
    aux->elo = T;
    T = aux;
    std::cout<<"\n Registro Cadastrado! \n";
    return T;
    };

Show *Show::ExcluirShow(Show*T){
    Show *aux = T;
    T = T->elo;
    delete(aux);
    return T;
};

void Show::ListagemGeral(Show*T){
    Show *aux = T;
    if(aux == NULL){
        std::cout<<"\nO cadastro está vazio \n";
    }
    else{
        while(aux != NULL){
            std::cout<< aux->nome << " ,"<< aux->local << " ," << aux->cache<< " ,"<< aux->publico <<" ,"<< aux->ingresso << " ."<< std::endl;
            aux = aux->elo;
        }
    }
}

void Show::ShowPlateia(Show*T){
    Show *aux = T;
    if(aux == NULL){
        std::cout<<"\nO cadastro está vazio \n";
    }
    else{
        int maior = 0;
        while(aux != NULL){
            if(aux->publico >= maior){
                maior = aux->publico;
                aux = aux->elo;
            }
            else{
                aux = aux->elo;
            }
        }
        Show *aux = T;
        while(aux != NULL){
            if(aux->publico == maior){
                std::cout<< aux->nome << " ,"<< aux->local << " ," << aux->cache<< " ,"<< aux->publico <<" ,"<< aux->ingresso << " ."<< std::endl;
                aux = aux->elo;
            }
            else{
                aux = aux->elo;
            }
        }

    }
}

void Show::ShowLucro(Show*T){
    Show *aux = T;
    if(aux == NULL){
        std::cout<<"\nO cadastro está vazio \n";
    }
    else{
        int maior = 0;
        while(aux != NULL){
            if(((aux->publico * aux->ingresso)- aux->cache) >= maior){
                maior = ((aux->publico * aux->ingresso)- aux->cache);
                aux = aux->elo;
            }
            else{
                aux = aux->elo;
            }
        }
        Show *aux = T;
        while(aux != NULL){
            if(((aux->publico * aux->ingresso)- aux->cache) == maior){
                std::cout<< aux->nome << " ,"<< aux->local << " ," << aux->cache<< " ,"<< aux->publico <<" ,"<< aux->ingresso << " ."<< std::endl;
                aux = aux->elo;
            }
            else{
                aux = aux->elo;
            }
        }

    }
}


