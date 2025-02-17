#include "lista.h"

Arvore *Arvore::Inserir(Arvore *P, int N)
{
    Arvore *novo, *aux = P;
    if (aux == NULL)
    {
        novo = new Arvore();
        novo-> Nome = Nome;
        novo->Num = N;
        novo->AlturaDir = 0;
        novo->AlturaEsq = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        aux = novo;
    }
    else if (N < aux->Num)
    {
        aux->esq = Inserir(aux->esq, N);
        if (aux->esq->AlturaDir > aux->esq->AlturaEsq)
            aux->AlturaEsq = aux->esq->AlturaDir + 1;
        else
            aux->AlturaEsq = aux->esq->AlturaEsq + 1;
        aux = Atualiza(aux);
    }
    else
    {
        aux->dir = Inserir(aux->dir, N);
        if (aux->dir->AlturaDir > aux->dir->AlturaEsq)
            aux->AlturaDir = aux->dir->AlturaDir + 1;
        else
            aux->AlturaDir = aux->dir->AlturaEsq + 1;
        aux = Atualiza(aux);
    }
    return aux;
};


bool Arvore ::Consultar(Arvore *P, int N, bool achou)
{
    if ((P != NULL) && !achou)
    {
        if (P->Num == N)
        {
            achou = true;
        }
        else if (N < P->Num)
        {
            achou = Consultar(P->esq, N, achou);
        }
        else
        {
            achou = Consultar(P->dir, N, achou);
        }
    }
    return achou;
};
void Arvore ::MostrarPreOrdem(Arvore *P)
{
    Arvore *aux = P;
    if (aux != NULL)
    {
        std ::cout << "|" << aux->AlturaEsq << "| - " << aux->Num << " - | "
                   << aux->AlturaDir << "| " << std ::endl;
        MostrarPreOrdem(aux->esq);
        MostrarPreOrdem(aux->dir);
    }
};
Arvore *Arvore ::Remover(Arvore *P, int N)
{
    Arvore *p1, *p2, *aux = P;
    if (aux->Num == N)
    {
        if (aux->esq == aux->dir)
        {
            // O elemento a ser removido nao tem filhos
            delete (aux);
            return NULL;
        }
        else if (aux->esq == NULL)
        {
            // O elemento a ser removido nao tem filhos a esq.
            p1 = aux->dir;
            delete (aux);
            return p1;
        }
        else if (aux->dir == NULL)
        {
            // O elemento a ser removido nao tem filhos a dir.
            p1 = aux->esq;
            delete (aux);
            return p1;
        }
        else
        {
            // O elemento tem filhos para ambos os lados
            p2 = aux->dir;
            p1 = aux->dir;
            while (p1->esq != NULL)
            {
                p1 = p1->esq;
            }
            p1->esq = aux->esq;
            delete (aux);
            p2 = Atualiza(p2);
            return p2;
        }
    }
    else if (aux->Num < N)
    {
        aux->dir = Remover(aux->dir, N);
    }
    else
    {
        aux->esq = Remover(aux->esq, N);
    }
    aux = Atualiza(aux);
    return aux;
};
Arvore *Arvore ::Atualiza(Arvore *P)
{
    Arvore *aux = P;
    if (aux != NULL)
    {
        aux->esq = Atualiza(aux->esq);
        if (aux->esq == NULL)
            aux->AlturaEsq = 0;
        else if (aux->esq->AlturaEsq > aux->esq->AlturaDir)
            aux->AlturaEsq = aux->esq->AlturaEsq + 1;
        else
            aux->AlturaEsq = aux->esq->AlturaDir + 1;
        aux->dir = Atualiza(aux->dir);
        if (aux->dir == NULL)
            aux->AlturaDir = 0;
        else if (aux->dir->AlturaEsq > aux->dir->AlturaDir)
            aux->AlturaDir = aux->dir->AlturaEsq + 1;
        else
            aux->AlturaDir = aux->dir->AlturaDir + 1;
        aux = Balanceamento(aux);
    }
    return aux;
};
Arvore *Arvore ::Balanceamento(Arvore *P)
{
    int d, df;
    Arvore *aux = P;
    d = aux->AlturaDir - aux->AlturaEsq;
    if (d == 2)
    {
        df = aux->dir->AlturaDir - aux->dir->AlturaEsq;
        if (df >= 0)
            aux = RotacaoEsquerda(aux);
        else
        {
            aux->dir = RotacaoDireita(aux->dir);
            aux = RotacaoEsquerda(aux);
        }
    }
    else if (d == -2)
    {
        df = aux->esq->AlturaDir - aux->esq->AlturaEsq;
        if (df <= 0)
            aux = RotacaoDireita(aux);
        else
        {
            aux->esq = RotacaoEsquerda(aux->esq);
            aux = RotacaoDireita(aux);
        }
    }
    return aux;
};
Arvore *Arvore ::RotacaoDireita(Arvore *P)
{
    Arvore *aux = P, *aux1, *aux2;
    aux1 = aux->esq;
    aux2 = aux1->dir;
    aux->esq = aux2;
    aux1->dir = aux;
    if (aux->esq == NULL)
        aux->AlturaEsq = 0;
    else if (aux->esq->AlturaEsq > aux->esq->AlturaDir)
        aux->AlturaEsq = aux->esq->AlturaEsq + 1;
    else
        aux->AlturaEsq = aux->esq->AlturaDir + 1;
    if (aux1->dir->AlturaEsq > aux1->dir->AlturaDir)
        aux1->AlturaDir = aux1->dir->AlturaEsq + 1;
    else
        aux1->AlturaDir = aux1->dir->AlturaDir + 1;
    return aux1;
};
Arvore *Arvore ::RotacaoEsquerda(Arvore *P){
    Arvore *aux = P, *aux1, *aux2;
    aux1 = aux->dir;
    aux2 = aux1->esq;
    aux->dir = aux2;
    aux1->esq = aux;
    if (aux->dir == NULL)
        aux->AlturaDir = 0;
    else if (aux->dir->AlturaEsq > aux->dir->AlturaDir)
        aux->AlturaDir = aux->dir->AlturaEsq + 1;
    else
        aux -> AlturaDir = aux -> dir -> AlturaDir + 1;
    if (aux1 -> esq -> AlturaEsq > aux1 -> esq -> AlturaDir)
        aux1 -> AlturaEsq = aux1 -> esq -> AlturaEsq + 1;
    else
        aux1 -> AlturaEsq = aux1 -> esq -> AlturaDir + 1;
    return aux1;
};