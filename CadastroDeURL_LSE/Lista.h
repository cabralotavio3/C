#include <iostream>
class Lista
{
public:
    std ::string Url;
    int Ncadastro, n;
    Lista *elo;
    Lista **Inserir(Lista **, std ::string, int);
    void Listar(Lista *);
    Lista **Excluir(Lista **, std ::string, bool *);
    Lista *Verifica_Url(Lista *, std ::string);
};