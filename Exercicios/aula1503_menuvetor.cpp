#include <iostream>

using namespace std;

int main()
{
    int vet[50], i, maior = 0, somaimpares = 0, maiorpar, escolha;
    srand(time(NULL));
    do{
        system("clear");
        cout << "1- exibir vetor \n";
        cout << "2- exibir maior numero \n";
        cout << "3- exibir maior dos pares \n";
        cout << "4- exibir soma dos impares \n";
        cout << "5- exibir numeros primos \n";
        cout << "6- encerrar programa \n";
        cout << "Qual sua escolha? ";
        cin >>  escolha;

        if(escolha == 1){
        //MOSTRAR TODOS OS NUMEROS
        cout << "Todos os vetores da lista sao: " << endl;
        for(i = 0; i < 50; i++){
            vet[i] = rand() % 100 + 1;
            cout << vet[i] << " ";
        }
        cout << endl;
        cin.ignore().get();
    }

        else if(escolha == 2){
        //MOSTRAR O MAIOR NUMERO
        for(i =0; i< 50; i++){
            if(maior < vet[i])
                maior = vet[i];
        }
        cout << endl << "O maior número é: "<< maior << endl;
        cout << endl;
        cin.ignore().get();
    }
        else if(escolha == 3){
        //MOSTRAR O MAIOR DOS PARES
        if(maior % 2 == 0)
            maiorpar = maior;
        else
            for(i = 0; i<50; i++){
                if(maiorpar < vet[i] && vet[i] % 2 == 0)
                maiorpar = vet[i];
        }
        cout << "O maior dos pares é: " << maiorpar << endl;
        cout << endl;
        cin.ignore().get();

    }

        else if(escolha == 4){
        //MOSTRAR A SOMA DOS IMPARES
        for(i = 0; i<50; i++){
            if(vet[i] % 2 != 0)
            somaimpares += vet[i];
        }
        cout << "A soma dos impares é: " << somaimpares << endl;
        cout << endl;
        cin.ignore().get();
        }

        else if(escolha == 5){
        //MOSTRAR APENAS NUMEROS PRIMOS
        cout << "Os primos da lista são: ";
        for(i = 0; i<50; i++){
            if(vet[i] % 2 != 0 && vet[i] % 3 != 0 && vet[i] % 5 != 0 && vet[i] % 7 != 0)
                cout << vet[i] << " ";
        }
        cin.ignore().get();
        cout << endl;
    }
        else if(escolha == 6){
        cout << "Espero que tenha gostado do programa" << endl << "presione enter para continuar: ";
        cin.ignore().get();
    }
}while(escolha != 6);

    return 0;
}
