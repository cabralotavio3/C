#include <iostream>
class Show
{
    public:
        Show *CadastrarShow(Show*, std::string, std::string, int, int, int);
        Show *ExcluirShow(Show*);
        void ListagemGeral(Show*);
        void ShowPlateia(Show*);
        void ShowLucro(Show*);


    private:
        std::string nome, local;
        int cache, publico, ingresso;
        Show *elo;
};
