#include "Forca.h"

void Forca::escolha_palavra(){
    int n = rand() % T;
    p1 = dicionario[n];
}

void Forca::montarP2(){
    std::string p2 = "";
    for(i=0; i < p1.length(); i++){
        p2 += '-';
        }
}

void Forca::teste_letra(){
    bool achei = false;
    for(i=0; i < p1.length(); i++){
        if(p1[i] == L){
            p2[i] = L;
            achei = true;
        }
        }
        if(!achei){
            letras+=L;
            tentativas++;
        }
}

bool Forca::verfifica_fimjg(){
    bool acabou = false;
     for(i=0; i < p2.length(); i++){
        if(p2[i] == '-'){
            acabou =false;
        }
}
return acabou;
}
