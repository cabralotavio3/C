#include "pilha.h"

using namespace std;

int main()
{
    Pilha P, *topo = NULL;
    int op;
    string n, t;
    do
    {
        system(" clear ");
        cout << "1 - Inserir dados \n";
        cout << "2 - Exibir dados \n ";
        cout << "3 - Apagar registro\n ";
        cout << "4 - Esvaziar pilha de dados \n";
        cout << "5 - Finalizar programa\n";
        cout << " Informe sua opção : ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << " \nDigite o nome : ";
            cin.ignore();    // limpa o buffer
            getline(cin, n); // armazena até digitar o enter
            cout << " \nDigite o telefone: ";
            getline(cin, t);
            topo = P.InserirPilha(topo, n, t);
            cout << " \nRegistro incluido com sucesso !!\n";
            break;
        case 2:
            P.PercorrerPilha(topo);
            break;
        case 3:
            if (topo == NULL)
            {
                cout << "\nSem registros para deletar!\n";
            }
            else
            {
                topo = P.RemoverPilha(topo);
                cout << "\nRegistro deletado!\n";
            }
            break;
        case 4:
            if (topo == NULL)
            {
                cout << "\nSem registros para deletar!\n";
            }
            else
            {
                topo = P.EsvaziarPilha(topo);
                cout << "\n nPilha vazia !\n ";
            }
            break;
        case 5:
            cout << "\n nTchau !!\n";
            break;
        default:
            cout << " \nOpção inválida!\n";
        }
        cout << "\nPressione Enter para continuar !! ";
        cin.ignore().get();
    } while (op != 5);

    return 0;
}