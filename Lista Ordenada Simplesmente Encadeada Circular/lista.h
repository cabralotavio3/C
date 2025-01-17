#include <iostream>
class Arvore
{
public:
    int Nome, Num, AlturaDir, AlturaEsq;
    Arvore *dir, *esq;
    Arvore *Inserir(Arvore *, int);
    bool Consultar(Arvore *, int, bool);
    void MostrarPreOrdem(Arvore *);
    Arvore *Remover(Arvore *, int);
    Arvore *Atualiza(Arvore *);
    Arvore *Balanceamento(Arvore *);
    Arvore *RotacaoDireita(Arvore *);
    Arvore *RotacaoEsquerda(Arvore *);
};