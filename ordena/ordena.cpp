#include "ordena.h"

void Ordena::Bolha(int v[], int t, int *trocas, int *comp){
    for(i = 0; i < t; i++){
        for(j = 0; j < t - 1; j++){
            (*comp)++;
            if(v[j] > v[j+1]){
                (*trocas)++;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;

            }
        }
    }
};

void Ordena::BolhaMelhorado(int v[], int t, int *trocas, int *comp){
    int i = 1, j, aux;
    bool troca = true;
    while((i <= t) && (troca)){
        troca = false;
        for(j = 0; j < t-1; j++){
            (*comp)++;
            if(v[j] > v[j+1]){
                (*trocas)++;
                troca = true;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
        i++;
    }
};

void Ordena::Insertion(int v[], int t, int *trocas, int *comp){
    int i , j , eleito ;
    for(i = 1; i < t; i ++) {
        eleito = v[i];
        j = i - 1;
        (*comp)++;
    while ((j >= 0) && ( v[j] > eleito )) {
        (*comp)++;
        v[j + 1] = v[j];
        j--;
        (*trocas)++;
    }
    (*trocas)++;
    v[j + 1] = eleito;
    }
};

void Ordena::Selection(int v[], int t, int *trocas, int *comp){
     int i , j , eleito , menor , pos ;
        for( i = 0; i < t-1; i ++) {
            eleito = v[i];
            menor = v[i + 1];
            pos = i + 1;
            for(j = i+2; j < t; j++) {
                (*comp)++;
                if( v[j] < menor) {
                    menor = v[j];
                    pos = j ;
                }
            }
                (*comp)++;
                if(menor < eleito){
                    v[i] = v[pos];
                    (*trocas)++;
                    v[pos] = eleito ;
                }
        }

};



void Ordena::geraVetor(int v[], int t){
    for(i = 0; i < t; i++){
        v[i] = rand() % 100 + 1;
    }
};

void Ordena::exibeVetor(int v[], int t){
    for(i = 0; i < t; i++){
        std::cout << v[i] << " ";
    }
}

 void Ordena::copiaVetor(int v1[], int v2[], int t){
    for(i = 0; i < t; i ++)
        v2[i] = v1[i];
 }

