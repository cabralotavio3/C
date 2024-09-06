/*#include <iostream>

using namespace std;

int mdc_iterativo(int a, int b){
    int resto;
    while(a % b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return b;
}

int mdc_recursiva(int a, int b){
    if(a % b == 0)
        return b;
    return mdc_recursiva(b, a % b);

}


int main()
{   int n1, n2;
    cout << "Calculador de MDC:" << endl;
    cout << "Informe o numero 1:" << endl;
    cin >> n1;
    cout << "Informe o numero 2:" << endl;
    cin >> n2;

    cout << "O mdc e: "<< mdc_iterativo(n1, n2) << endl;
    cout << "O mdc e: "<< mdc_recursiva(n1, n2) << endl;
    return 0;
*/

#include <iostream>
#include <math.h>

using namespace std;

int converte_iterativa(unsigned long long int binario){
    int soma = 0, i= 0;
    while(binario /10 > 0){
        soma += binario%10 * pow(2,i);
        i++;
        binario /= 10;
    }
    soma += binario%10 *pow(2, i);
    return soma;
    }

int converte_recursiva(unsigned long long binario, int i){
    if(binario / 10 < 0){
        return binario%10*pow(2, i);
    }
    return (binario%10*pow(2, i))+converte_recursiva(binario / 10, ++i);
    }



int main(){
    unsigned long long int binario;
    cout << "Informe um binario:" << endl;
    cin >> binario;
    cout << converte_iterativa(binario);
    return 0;
}
