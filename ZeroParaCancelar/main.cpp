#include <iostream>
# include "pilhas.h"

using namespace std;

int main()
{
    pilhas P , *topo = NULL ;
    int num, k = 0, val;
    cout << "Digite a quantidade de números: ";
    cin >> num;
    cout << "Digite os valores: \n";
    while (k < num){
        cin >> val;
        if(val != 0){
            topo = P.InserirPilha(topo, val);
        };
        if(val == 0){
            topo = P.RemoverPilha(topo);
        };
        k += 1;
    }
    cout << P.SomarPilha(topo);
    return 0;
}
