
QUESTAO 1

#include <iostream>
using namespace std;

int somatorio(int nat1, int nat2){
    int somatorio = 0;

    for(int i = nat1; i <= nat2; i++){
        somatorio += i;
    }
    return somatorio;
}

int main()
{
    int nat1, nat2;
    bool condicoes = true;
    cout << "Bem Vindo Marcelo! Esse programa recebe 2 naturais como parametro e retorna o resultado do somatório dos números contidos nesse intervalo."<< endl<< "Nao se esqueca, o n1 deve ser entre 1 e 5, e o n2 entre 15 e 30";;
    cout << endl <<"insira o n1 e n2";
    cin >> nat1 >> nat2;
    if(nat1 < 1 || nat1 > 5 || nat2 < 15 || nat2 > 30){
        condicoes = false;
        cout << "Nao se esqueca, o n1 deve ser entre 1 e 5, e o n2 entre 15 e 30";
        }
    if(condicoes ==true)
        cout << somatorio(nat1, nat2);
    return 0;
}


QUESTAO 2
#include <iostream>
using namespace std;

int triangulo(int l1, int l2, int l3){
    if(l1 > l2 +l3 || l2 > l1+l3 || l3 > l2+l1)
        return 0;
    if(l1 < 0 ||l2 < 0 || l3<0)
        return 0;
    if(l1 == l2 == l3){
        return 1;
        }
    if(l1 == l2 || l2 == l3 || l3 == l1){
        return 2;
        }
    return 3;
 }

int main(){
    int l1, l2, l3;
    cout << "Bem Vindo Marcelo! Esse programa recebe 3 inteiros como parametro, verifica se os números possuem as propriedades para se tornarem lados de um triangulo, caso eles possuam, ele retorna qual tipo de triangulo."<< endl;
    cin >> l1 >>l2 >>l3;
    if(triangulo(l1,l2,l3) == 0){
         cout<<"este triangulo nao pode ser formado";
         }
    if(triangulo(l1,l2,l3) == 1){
        cout<<"O triângulo e equilatero";
    }
    if(triangulo(l1,l2,l3) == 2){
        cout<<"O triângulo e isosceles";
    }
    if(triangulo(l1,l2,l3) == 3){
        cout<<"O triângulo e escaleno";
    }

    return 0;
}



QUESTAO 3

#include <iostream>
using namespace std;

bool amigos(int nat1,int nat2){
    bool verifica = false;
    int soma = 0;
    for(int i = 1; i < nat1; i++){
        if(nat1 % i == 0)
        soma += i;
    }
    if(soma == nat2){
        verifica = true;
        soma = 0;
        for(int i = 1; i < nat2; i++){
            if(nat2 % i == 0)
            soma += i;
    }
    if(verifica == false)
        return false;
    if(soma == nat1){
        return true;
    }

}
}

int main(){
    int n1, n2;
    cout << "Bem Vindo Marcelo! Esse programa recebe 2 naturais como parametro e retorna se os números contidos nesse intervalo sao amigos."<< endl;
    cin >> n1 >> n2;
    if(amigos(n1,n2) == true)
        cout<<"Esses dois numeros sao amigos, muito parceiros";
    else(cout<< "nao sao amigos");

    return 0;
}
