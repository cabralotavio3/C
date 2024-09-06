#include "Forca.h"
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    Forca f;
    char repete;
    bool acertou;
    do{
        f.escolha_palavra();
        f.montarP2();
        acertou = false;
        f.tentativas = 0;
        while(f.tentativas < 6 && !acertou){
            cout<<"Palavra: "<<f.p2<<endl;
            cout<<"Palpites: "<<f.tentativas<<endl;
            cout<<"Letras: "<<f.letras<<endl;
            cout<<"Informe a letra: "<<endl;
            cin>> f.L;
            f.teste_letra();
            acertou = f.verfifica_fimjg();
        }
        if(acertou == true){
            cout << "parabens!! Voce concluiu a forca com sucesso" << endl;
        }
        else{
            cout << "Voce errou!! Estude mais" << endl;
            cout << "A palavra era: " << f.p1 << endl;
    }
    cout << "Jogar dnv?('s' ou 'n')"<< endl;
    cin >> repete;
    }while(repete == 's');
    return 0;
}
