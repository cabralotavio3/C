#include <iostream>

using namespace std;

int main()
{
    string dicionario[30] = {"chuva", "bunda", "racionalismo", "universo", "mente", "bicalho", "passado","insanidade", "caverna", "presente", "futuro", "acordo", "estudo", "correria", "tempo"
    "energia", "pensar", "espiritualidade", "ego", "material", "marcelocorreamussel", "cinema", "brasil", "duna", "joaohumberto", "forca", "iluminado", "psicologia", "sapo", "alexandre"};
    string palavra, escondida, palpites;
    int tentativas, contar, i;
    char continua, letra;
    bool acertou, achei;
    srand(time(NULL));
    do{
    palavra = dicionario[rand() % 30];
    tentativas = 0;
    palpites = "";
    escondida = "";
    acertou = false;
    achei = false;
    for(i=0; i < palavra.length(); i++){
        escondida += '-';
    }
    while(!acertou && tentativas < 7){
    cout<< "Palavra sorteada: " << escondida << endl;
    cout << "Tentativas erradas: " << tentativas << endl;
    cout << "Palpites feitos: " << palpites << endl;
    cout << "Informe uma letra: " << endl;
    cin >> letra;
    for(i=0; i < escondida.length(); i++){
        if(letra == palavra[i]){
            escondida[i] = letra;
            achei = true;
            }
    }
    if(achei == false){
        tentativas ++;
    }
    achei = false;
    palpites += letra;
    contar = 0;
    for(i=0; i < palavra.length(); i++){
        if(escondida[i] == '-'){
            contar ++;
        }
    }
    if(contar == 0){
        acertou = true;
        }
    }
    if(acertou == true){
        cout << "parabens!! Voce concluiu a forca com sucesso" << endl;
    }
    else{
        cout << "Voce errou!! Estude mais" << endl;
        cout << "A palavra era: " << palavra << endl;
    }
    cout << "Jogar dnv?('s' ou 'n')"<< endl;
    cin >> continua;
    }while(continua == 's');
    return 0;
}
