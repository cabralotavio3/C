#include <iostream>
#include <ctime>
using namespace std;

// 1
int main(){
    int velmax, vel, multa = 0;
    cout << "insira a velocidade maxima permitida: ";
    cin >> velmax;
    cout << "insira a velocidade do motorista: ";
    cin >> vel;
    if(velmax < vel){
        multa = (vel - velmax) * 5;
    }
    cout << "sua multa e de:R$" << multa;
return 0;
}

//2
int main(){
    int Time1, Time2, Placar1, Placar2, Pontos;
    cout << "Informe o placar do jogo: ";
    cin >> Placar1 >> Placar2;
    cout << "Informe a sua aposta: ";
    cin >> Time1 >> Time2;
    if(Time1 == Placar1)
        Pontos += 5;
    if(Time2 == Placar2)
        Pontos += 5;
    if(Placar1 > Placar2 && Time1 > Time2) || (Placar2 > Placar1 && Time2 > Time1) || (Time1 == Placar1 && Time2 == Placar2)
        Pontos += 10;
     cout << "Você marcou " << Pontos << "pontos \n";
    return 0;}
//3
int main()
{
    int i, j;
    bool primo;
    for(i = 100; i <= 500; i++){
        primo = true;
        for(j = i - 1; j >= 2; j--){
            if(i % j ==0){
                primo = false;
            }
        }
        if(primo){
            cout << i << " ";
        }

}
}

// 4
int main()
{
    int a, b, z, x , y;
    bool achei;
    cout << "informe a: ";
    cin >> a;
    do{
        cout << "informe b: ";
        cin >> b;
    }while(b<=a);
    do{
        cout << "informe z: ";
        cin >> z;
    }while(z<=b);
    achei = false;
    for(x = a; x < b; x++){
        for(y = x + 1; y <= b; y++) {
            if(x + y == z){
                cout << "x: " << x << "  + y: " << y << " = " << z << endl;
                achei = true;
            }
        }

    }
    if(!achei){
        cout << "N tem";
    }
    return 0;
}


// 5
int main()
{
    int vetor[30], i , num;
    bool achei;
    srand(time(NULL));
    for(i=0 ; i<30; i++){
        vetor[i] = rand() % 100 + 1;
    }
    cout << "informe um numero: ";
    cin >> num;
    achei = false;
    for(i=0; i < 30; i++){
        if(num== vetor[i]) {
            cout << "posicao: " << i << endl;
            achei = true;
        }
    }
    if(!achei){
        cout << "valor não encontrado \n";
    }
    cout << "vetor gerado: \n";
    for(i=0; i< 30; i ++){
        cout << vetor[i] << " ";

    }
return 0;
}
