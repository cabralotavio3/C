#include "pilhas.h"

pilhas* pilhas::InserirPilha(pilhas *T , int x){
    pilhas* novo = new pilhas();
    novo -> N = x;
    novo -> elo = T;
    T = novo;
    return T;
};

pilhas* pilhas::RemoverPilha(pilhas * T){
    pilhas* aux = T;
    T = T -> elo ;
    delete ( aux );
    return T;
};

int pilhas::SomarPilha(pilhas * T){
    pilhas* aux = T;
    int soma = 0;
    while( aux != NULL ){
        soma += aux -> N;
        aux = aux -> elo;
    }
    return soma;
};

