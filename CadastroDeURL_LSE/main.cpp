#include "Lista.h"

using namespace std;

void Menu()
{
    system(" clear ");
    cout << "1 - Inserir \n";
    cout << "2 - Listar \n";
    cout << "3 - Excluir \n";
    cout << "4 - Sair \n";
    cout << " Informe sua opção : ";
}

int main()
{
    Lista **P, L;
    P = new Lista *[2];
    P[0] = NULL;
    P[1] = NULL;
    string url, ncadastro;
    int op;
    bool achei;
    do
    {
        Menu();
        cin >> op;
        switch (op)
        {
        case 1:
            cout << " Informe o url : ";
            cin.ignore();
            getline(cin, url);
            cout << " informe o ncadastro: ";
            getline(cin, ncadastro);
            P = L.Inserir(P, url, ncadastro);
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
                L.Listar(P[0]);
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
                P = L.Excluir(P, url, &achei);
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