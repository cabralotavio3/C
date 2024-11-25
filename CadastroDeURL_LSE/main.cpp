#include "Lista.h"

using namespace std;

void Menu()
{
    system(" clear ");
    cout << "1 - Inserir \n";
    cout << "2 - Listar \n";
    cout << "3 - Excluir \n";
    cout << "4 - Sair \n";
    cout << " Informe sua opcao : ";
}

int main()
{
    Lista ** P, *pesq, obj;
    P = new Lista *[2];
    string url;
    int op, ncadastro;
    bool achei;
    do
    {
        Menu();
        cin >> op;
        switch (op)
        {
        case 1:
            cout << " Informe o url : ";
            cin >> url;
            pesq = obj.Verifica_Url(P[0], url);
            if(pesq == NULL){
                P = obj.Inserir(P, url, 1);
            }else{
                ncadastro = pesq->Ncadastro +1;
                P = obj.Excluir(P, url, &achei);
                P =obj.Inserir(P, url, ncadastro);
            }
            cout << " Inserido com sucesso !!\n ";
            break;
        case 2:
            if (P[0] == NULL)
            {
                cout << " Lista vazia !\n";
            }
            else
            {
                cout << " Lista de contatos\n\n";
                obj.Listar(P[0]);
            }
            break;
        case 3:
            if (P[0] == NULL)
            {
                cout << " Lista vazia !\n";
            }
            else
            {
                cout << " Informe o url a ser excluido: ";
                cin.ignore();
                getline(cin, url);
                P = obj.Excluir(P, url, &achei);
                if (achei)
                    cout << " Excluido com sucesso!\n ";
                else
                    cout << " Contato não localizado!\n";
            }
            break;
        case 4:
            cout << " Tchau !\n";
            break;
        default:
            cout << " Opção inválida !\n ";
        }
        cin.ignore().get();
    } while (op != 4);
    return 0;
}