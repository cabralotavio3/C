#include "fatoracao.h"

Fat * Fat::Inserir(Fat* F, int N, int D){
    Fat * novo = new Fat();
    novo -> N = N;
    novo -> D = D;
    novo-> elo = NULL;
    if(F != NULL)
        F -> elo = novo;
    F = novo;
    return F;
}

Fat * Fat::Fatoracao(Fat * F, int N){
    N = numero;
    contador = 2;
    while(numero != 1){
        if(numero / contador == 0){
            Fat * novo = new Fat();
            novo -> contador = contador;
            novo-> elo = NULL;
            if(F != NULL)
                 F -> elo = novo;
            F = novo;
            numero = numero/contador;
            return F;
        }
        else{
            contador++;
        }
        }
    }

Fat * Fat::Apaga(Fat* F){
    Fat * aux = F;
    while(aux != NULL){
        F = F -> elo;
        delete(aux);
        aux = F;
    }
    return F;
}

void * Fat::Listar(Fat * F){
    Fat * aux = F;
    while(aux !=NULL){
        std::cout<< aux-> contador << "*";
        aux = aux -> elo;
    }
}
