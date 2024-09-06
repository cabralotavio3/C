/*
//QUESTAO 1

#include <iostream>

using namespace std;
int unsigned tam = 30;

void selection(int vet[]){
    int i, j, eleito, menor, pos;
    for( i = 0; i < tam-1; i++){
        eleito = vet[i];
        menor = vet[i + 1];
        pos = i + 1;
        for(j = i + 2; j < tam;j++){
            if(vet[j] < menor ){
                menor = vet[j];
                pos = j;
            }
        }
        if(menor < eleito){
            vet[i] = vet[pos];
            vet[pos] = eleito;
        }
    }
}

void gerar_vetor(int vet[]){
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 100 + 1;
    }
}

int main()
{
    srand(time(NULL));
    int vet[30], i, num_escolhido, aux, pos_proxima;
    bool achou = false;
    cout << "Bom dia Marcelo! vou gerar um vetor de 30 posições para você e organiza-lo por meio do método seleção" << endl;
    gerar_vetor(vet);
    selection(vet);
    for(int i = 0; i < tam; i++){
        cout<< vet[i] << " ";
    }
    cout << endl<< "Pronto! o vetor foi gerado e ordenado. Agora me informe um número entre 1 e 100 para verificar se ele está incluido no vetor"<< endl;
    cin >> num_escolhido;
    i = 0;
    for(i = 0; i<tam; i++){
        if(vet[i] == num_escolhido){
            cout << "Achei o número na posição:" << i;
            achou = true;
            break;
        }
        }
        if(achou == false){
        pos_proxima = 0;
        aux = num_escolhido - vet[0];
            for(i = 1; i<tam; i++){
                if(vet[i] > num_escolhido){
                    if(vet[i] - num_escolhido < aux){
                        aux = vet[i] - num_escolhido;
                        pos_proxima = i;
                        }
                }
                else{
                    if(num_escolhido - vet[i] < aux){
                        aux = num_escolhido - vet[i];
                        pos_proxima = i;
                        }
                }
            }
            cout << "O mais proximo que achei foi o "<< vet[pos_proxima];
        }



    return 0;
}

*/


/*
//QUESTAO 2
#include <iostream>

using namespace std;
int unsigned tam = 20;

int selection(int vet[]){
    int i, j, eleito, menor, pos, trocas = 0;
    for( i = 0; i < tam-1; i++){
        eleito = vet[i];
        menor = vet[i + 1];
        pos = i + 1;
        for(j = i + 2; j < tam;j++){
            if(vet[j] > menor ){
                menor = vet[j];
                pos = j;
            }
        }
        if(menor > eleito){
            trocas++;
            vet[i] = vet[pos];
            vet[pos] = eleito;
        }
    }
    return trocas;
}

void gerar_vetor(int vet[]){
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 100 + 1;
    }
}

int main()
{
    srand(time(NULL));
    int vet[30], i, trocas = 0;
    cout << "Bom dia Marcelo! vou gerar um vetor de 20 posições para você e vou organiza-lo de forma decrescente" << endl;
    gerar_vetor(vet);
    cout << "Vetor original :" << endl;
    for(int i = 0; i < tam; i++){
        cout<< vet[i] << " ";
    }
    trocas = selection(vet);
    cout <<endl<< "Vetor ordenado de forma decrescente:"<< endl;
    for(int i = 0; i < tam; i++){
        cout<< vet[i] << " ";
    }
        cout << endl;
        cout << "O número de trocas foi:" << trocas;
}
*/
