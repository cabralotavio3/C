#include "pilha.h"

Pilha *Pilha::InserirPilha(Pilha *T, std ::string N, std ::string Tel)
{
    Pilha *aux = new Pilha();
    aux -> Nome = N;
    aux -> Telefone = Tel;
    aux -> elo = T;
    T = aux;
    return T;
};
void Pilha::PercorrerPilha(Pilha *T)
{
    Pilha *aux = T;
    if (aux == NULL)
    {
        std ::cout << "\n nPilha vazia !\n ";
    }
    else
    {
        std ::cout << "\n nRegistros Cadastrados\n";
        while (aux != NULL)
        {
            std ::cout << aux -> Nome << " - " << aux -> Telefone << std ::endl;
            aux = aux -> elo;
        }
    }
};
Pilha *Pilha ::RemoverPilha(Pilha *T)
{
    Pilha *aux = T;
    T = T -> elo;
    delete (aux);
    return T;
};
Pilha *Pilha ::EsvaziarPilha(Pilha *T)
{
    Pilha *aux = T;
    while (aux != NULL)
    {
        T = T -> elo;
        delete (aux);
        aux = T;
    }
    return T;
};