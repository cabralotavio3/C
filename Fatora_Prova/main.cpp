#include "fatoracao.h"

using namespace std;

void Menu(){
    system("clear");
    cout << "\nBem vindo ao Fatorador de primos! \n";
    cout << "1- Realizar Fatoração \n";
    cout << "2- Apagar tudo \n";
    cout<< "3- Sair\n";
}
int main(){
    Fat * Inicio = NULL, *Fim = NULL, F;
    int op, n, d;
    do{
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout<<"Insira o numero:";
                cin>>n;
                d = 2;
                while(n > 1){
                    if(n % d ==0)
                        Fim = F.Fatoracao(Fim, n);
                    if(Inicio ==NULL)
                        Inicio = Fim;
                n /= d;
                }
                cout<<"Fatoração prima: \n";
                F.Listar(Inicio);
            break;
            case 2:
                F.Apaga(Inicio);
                break;
            case 3:
                cout<<"tchauu";
                break;
                default:
                cout<<"invalido!";
                }
    }while(op != 3);
    return 0;
}