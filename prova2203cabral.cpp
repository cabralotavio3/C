#include <iostream>

using namespace std;

int main()
{
    int vet[50], i, escolha = 0, qtd1 = 0, qtd2 = 0;
    bool gerouvetor = false;
    srand(time(NULL));
    do{
    //interface do usuário
    cout << "\n" <<"Bom dia Marcelo!! Seja bem vindo a interface de vetores ímpares. Qual sua escolha? \n";
    cout << "1 - gerar vetor\n";
    cout << "2 - mostrar vetor\n";
    cout << "3 - mostrar quantidades maiores que 51\n";
    cout << "4 - mostrar quantidade de múltiplos de 5\n";
    cout << "5 - finalizar o programa\n";
    cin >> escolha;

    // 1 - gerar vetor
    if(escolha == 1){
    for(i = 0; i < 50; i++){
        do{
            vet[i] = rand() % 100 + 1;
        }while(vet[i] % 2 != 1);
    }
    gerouvetor = true;
    }



    //2 - mostrar vetor
    else if(escolha == 2){
    if(gerouvetor == false)
        cout << "voce precisa gerar o vetor";
    else{
    for(i = 0; i < 50; i++){
        cout << vet[i] << " \n";
        }}
}

    //3 - mostrar quantidade maior que 51
    else if(escolha == 3){
    if(gerouvetor == false)
        cout << "voce precisa gerar o vetor";
    else{
    for(i = 0; i < 50; i++){
        if(vet[i] > 51)
            qtd1 += 1;
    }  cout << qtd1 << " \n";
        qtd1 = 0;}
}
    // 4 - mostrar qtd de multiplos de 5
    else if(escolha == 4){
    if(gerouvetor == false)
        cout << "voce precisa gerar o vetor";
    else{
    for(i = 0; i < 50; i++){
        if(vet[i] % 5 == 0)
            qtd2 += 1;
        }cout << qtd2 << "\n";
        qtd2 = 0;}
}

}while(escolha != 5);

    return 0;
}
