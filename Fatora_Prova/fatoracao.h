#include <iostream>

class Fat
{
public:
    int N, D, numero, contador;
    Fat * elo;
    Fat * Inserir(Fat*, int , int);
    Fat * Fatoracao(Fat*, int);
    Fat * Apaga(Fat*);
    void * Listar(Fat*);
};

