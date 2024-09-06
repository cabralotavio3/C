#include <iostream>

using namespace std;

float pow_idade_das_cavernas(float base, float exp){
    if(exp == 0){
        return 1;
    }
    if(exp < 0){
        base = 1/base;
        exp *= -1;
    }
        float resposta = base;
        for(int i = 1; i < exp; i++)
            resposta *= base;
        return resposta;
}

float log_idade_das_cavernas(int a, int ba){
    if(a == 1){
        return 0;
    }
    if(ba == 0){
    return 0;
    }
    int exp = 1;
    do{
    a /= 3;
    exp ++;
    }while(a > ba);
    return exp;

}
bool palindromo(string palindromo){
    int tam = palindromo.length();
    for(int i = 0; i< tam/2; i ++){
        if(palindromo[i] != palindromo[tam-1-i]){
            return false;}
    }
    return true;
}


//1
/*int main()
{
    float num, exp;
    cout << "Insira o número e o expoente da função exponencial" << endl;
    cin >> num >> exp;
    cout << pow_idade_das_cavernas(num, exp);
    return 0;
}
*/

//2
/*int main(){
    float a, b;
    cin >> a >> b;
    cout << log_idade_das_cavernas(a,b);

    return 0;
}
*/


//3
/*int main(){
    if(palindromo("arara")){
        cout<< "sim";
    }
    else{
        cout << "errou";
    }
    return 0;
}*/
