#include <iostream>
class Forca
{
    public:
        const int T = 20;
        std::string dicionario[30] = {"gojira", "iron", "maiden", "megadeth", "sepultura", "angra", "metallica","death","slayer","misfits","opeth","motorhead","mastodon","black","sabbath","dio",
        "judas", "priest", "oozy", "queensryche", "rage", "against", "machine", "pantera", "shaman", "rainbow", "annihilator","tool","soad","marcelomussel" };
        std::string p1, p2, letras;
        char L;
        int n, jogadas, i, tentativas;
        bool achei, acertou;

        void escolha_palavra();
        void montarP2();
        void teste_letra();
        bool verfifica_fimjg();
};
