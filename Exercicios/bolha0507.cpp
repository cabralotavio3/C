#include <iostream>

using namespace std;

int main()
{
int qtd, i , j, aux, valor = 0, contador;

qtd = rand() % 9 + 3;

int choco[qtd];
cout << "Vetor Original\n";

for(i = 0; i < qtd; i++){
    choco[i] = rand() % 9 + 2;
    cout<< choco[i] << "   " ;
}
cout << "\n";

for(i = 0; i < qtd; i++){
    for(j = 0; j < qtd - 1; j ++){
        if(choco[j] < choco[j+1]){
            aux = choco[j];
            choco[j] = choco[j + 1];
            choco[j + 1] = aux;
        }
    }
}
cout << "Valor Organizado Decrescente:"<< "\n";
for(i = 0; i < qtd; i++){
    cout<< choco[i] << "   ";
}

contador = 1;
for(i=0; i < qtd; i++){
    if(contador < 3){
        valor += choco[i];
        contador++;
    }else{
        contador = 1;
    }
}
    cout<< "\n"<< "Valor Total: R$ " <<valor;
    return 0;
}
