#include <iostream>
using namespace std;

/*QUESTAO 1
void gerarvetor(int vet[]){
    for(int i = 0; i < 30; i++){
        vet[i] = rand() % 200 + 1;
    }
}

bool verificar_primo(int numero){
    for(int j = 2; j < numero; j++){
        if(numero % j == 0){
            return false;
        }
    }return true;
}
int contarprimos(int v[]){
    int total = 0;
    for(int j = 0; j < 30; j++){
        if(verificar_primo(v[j]))
            total++;
}
return total;
}

int* gerarvetor_primo(int vet_base[], int tam){
    int *vetprimo = new int[tam];
    int aux = 0;
    for(int i = 0; i < 30; i++){
        if(verificar_primo(vet_base[i])){
            vetprimo[aux] = vet_base[i];
            aux++;
        }
    }
    return vetprimo;
}

int main()
{
    int vet[30], *vetprimo, totalprimos, i = 0;
    char repete;
    srand(time(NULL));
    do{
    gerarvetor(vet);
    cout << "primeiro vetor <3" << endl;
    for(i = 0; i<30; i++){
        cout << vet[i] << " ";
    }
    cout<< endl;
    totalprimos = contarprimos(vet);
    vetprimo = gerarvetor_primo(vet, totalprimos);
    cout << "numero de primoss : " << totalprimos << endl;
    cout << "vetor de primos:" << endl;
    for(i = 0; i<totalprimos; i++){
        cout << vetprimo[i] << " ";
    }
    cout << "repetir??(s/n)" << endl;
    cin >> repete;

    }while(repete == 's');
    return 0;
}
*/



/*QUESTAO 2
int verificarocorrencias(unsigned long long int nat, int digito){
    int total = 0;
    while(nat / 10 > 0){
        if(nat % 10 == digito){
            total++;
        }
        nat/= 10;
    }
    return total;
}

int main(){
    unsigned long long int nat;
    int digito, qtd;
    cout << "Informe o numero inteiro: "<< endl;
    cin >> nat;
    cout << "informe o digito que será contado no natural" << endl;
    cin >> digito;

    qtd = verificarocorrencias(nat, digito);

    cout << "O numero aparece " << qtd << " vezes" << endl;

    return 0;
}
*/
