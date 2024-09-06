#include "ordena.h"

using namespace std;

const int TAM = 10;

void Menu(){

    cout << "a) - Gerar vetor\n";
    cout << "b) - Bolha\n";
    cout << "c) - Bolha Melhorado\n";
    cout << "d) - Inserção\n";
    cout << "e) - Seleção\n";
    cout << "f) - Finalizar programa\n";
    cout << "Escolha uma opção: " << endl;
}

int main()
{
    Ordena Obj;
    int vetor[TAM], copia[TAM], trocas, comp;
    char op;
    srand(time(NULL));

    do{
        Menu();
        cin >> op;
        switch(op){
            case 'a':
                Obj.geraVetor(vetor, TAM);
                cout << "Vetor gerado!!!\n";
                break;
            case 'b':
                Obj.copiaVetor(vetor, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.Bolha(copia, TAM, &trocas, &comp);
                cout << "\nVetor Ordenado: ";
                Obj.exibeVetor(vetor, TAM);
                cout << "\nTrocas: " << trocas << " comparações: " << comp;
                break;
            case 'c':
                Obj.copiaVetor(vetor, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.BolhaMelhorado(copia, TAM, &trocas, &comp);
                cout << "\nVetor Ordenado: ";
                Obj.exibeVetor(vetor, TAM);
                cout << "\nTrocas: " << trocas << " comparações: " << comp;
                break;
            case 'd':
                Obj.copiaVetor(vetor, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.Insertion(copia, TAM, &trocas, &comp);
                cout << "\nVetor Ordenado: ";
                Obj.exibeVetor(vetor, TAM);
                cout << "\nTrocas: " << trocas << " comparações: " << comp;
                break;
            case 'e':
                Obj.copiaVetor(vetor, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.Selection(copia, TAM, &trocas, &comp);
                cout << "\nVetor Ordenado: ";
                Obj.exibeVetor(vetor, TAM);
                cout << "\nTrocas: " << trocas << " comparações: " << comp;
                break;

        }
        cin.ignore().get();
    }while(op != 'f');



    Obj.exibeVetor(vetor, TAM);
    trocas = comp = 0;
    Obj.Bolha(vetor, TAM, &trocas, &comp);
    cout << "\nVetor Ordenado: ";
    Obj.exibeVetor(vetor, TAM);
    cout << "\nTrocas: " << trocas << " comparações: " << comp;

    return 0;
}
