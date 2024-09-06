#include <iostream>
class Pilha
{
private:
    std ::string Nome, Telefone;
    Pilha *elo;

public:
    Pilha *InserirPilha(Pilha *, std ::string, std ::string);
    void PercorrerPilha(Pilha *);
    Pilha *RemoverPilha(Pilha *);
    Pilha *EsvaziarPilha(Pilha *);
};