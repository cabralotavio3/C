#include "lista.h"

using namespace std;

void Menu()
{
    system(" clear ");
    cout << " 1. Inserir número na Árvore \n ";
    cout << " 2. Apresentar valores pré - ordem \n";
    cout << " 3. Remover número da Árvore \n";
    cout << " 4. Sair\n ";
    cout << " Escolha sua opção : ";
};

int main()
{
    Arvore *Raiz = NULL, obj;
    int n, op;
    bool achou;
    srand(time(NULL));
    do
    {
        Menu();
        cin >> op;
        switch (op)
        {
        case 1:
            cout << " Informe um número : ";
            cin >> n;
            Raiz = obj.Inserir(Raiz, n);
            cout << " Inserido com sucesso!\n";
            break;
        case 2:
            if (Raiz == NULL)
            {
                cout << " Árvore vazia \n";
            }
            else
            {
                cout << " Pré - Ordem \n";
                obj.MostrarPreOrdem(Raiz);
            }
            break;
        case 3:
            cout << " Informe um número : ";
            cin >> n;
            achou = false;
            if (obj.Consultar(Raiz, n, achou))
            {
                Raiz = obj.Remover(Raiz, n);
                cout << " Removido com sucesso !!\n";
            }
            else
                cout << " Número não localizado !\n";
            break;
        case 4:
            unsigned int microsecond = 1000000;

            for (int i = 1; i < 5; i++)
            {
                cout << i << endl;
                usleep(3 * microsecond); // sleeps for 3 second
            }
            break;
        case 5:
            cout << " Fim !\n";
            break;
        default:
            cout << " Opção inválida !\n ";
        }
        cout << "\nTecle ENTER para continuar .\n";
        cin.ignore().get();
    } while (op != 5);
    return 0;
}