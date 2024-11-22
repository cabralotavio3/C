#include "Lista.h"
void Lista ::Listar(Lista *I)
{
    Lista *aux = I;
    while (aux != NULL)
    {
        std ::cout << aux->Url << " - " << aux->Ncadastro << " \n ";
        aux = aux -> elo;
    }
};

Lista *Lista ::Verifica_Url(Lista * R, std ::string U){
    Lista *atual = R[0], *ant = NULL;
    n = 0;
        while (atual != NULL){
            if(atual -> Url == U){
                return atual;
            }
            atual = atual -> elo;
}
}

Lista **Lista ::Inserir(Lista ** R, std ::string U, int N)
{
    Lista *novo = new Lista();
    novo -> Url = U;
    novo -> Ncadastro = N;
    if (R[0] == NULL)
    {
        R[0] = novo;
        R[1] = novo;
        R[1]  -> elo = NULL;
    }
    else
    {
        Lista *atual = R[0], *ant = NULL;
        while ((atual != NULL) && (novo -> Ncadastro < atual -> Ncadastro))
        {
            ant = atual;
            atual = atual -> elo;
        }
        while ((atual != NULL) && (novo -> Ncadastro == atual -> Ncadastro && novo->Url > atual-> Url))
        {
            ant = atual;
            atual = atual -> elo;
        }
        if (ant == NULL)
        {
            novo -> elo = atual;
            R[0] = novo;
        }
        else if (atual == NULL)
        {
            ant->elo = NULL;
            R[1] -> elo = novo;
            R[1]  -> elo = novo;
        }
        else
        {
            ant -> elo = novo;
            novo -> elo = atual;
        }
    }
    return R;
};

Lista **Lista ::Excluir(Lista **R, std ::string N, bool *achei)
{
    Lista *atual = R[0], *ant = NULL;
    while ((atual != NULL) && (atual -> Url != N))
    {
        ant = atual;
        atual = atual -> elo;
    }
    if (atual == NULL)
    {
        *achei = false;
        return R;
    }
    else
    {
        *achei = true;
        if (atual == R[0])
        {
            R[0] = R[0] -> elo;
        }
        else if (atual == R[1])
        {
            R[1] = ant;
            R[1] -> elo = NULL;
        }
        else
        {
            ant -> elo = atual -> elo;
        }
        delete (atual);
    }
    return R;
};