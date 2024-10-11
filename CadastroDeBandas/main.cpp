#include "Show.h"

using namespace std;

int main()
{
    Show S, *topo =NULL;
    int op;
    string n, l;
    int c, p, i;
    do{
        system("clear");
        cout<< "bem vindo ao gerenciador de shows"<<endl;
        cout << "1-Cadastra uma novo Show"<<endl;
        cout<<"2-Excluir Show"<<endl;
        cout<<"3-Listagem Geral"<<endl;
        cout<<"4-Listar Show com maior plateia"<<endl;
        cout<<"5-Listar Show com maior lucro"<<endl;
        cout<<"6-Sair"<<endl;
        cin >> op;

        switch(op){
            case 1:
            cout << "Digite o nome da Banda:" <<endl;
            cin.ignore();
            getline(cin, n);
            cout << "Digite o local do show:"<<endl;
            getline(cin, l);
            cout << "Digite o cachê da banda:"<<endl;
            cin >> c;
            cout << "Digite o Público pagante:"<<endl;
            cin >> p;
            cout << "Digite o valor do ingresso:"<<endl;
            cin >> i;
            topo = S.CadastrarShow(topo, n, l, c, p, i);
            break;

            case 2:
                if(topo ==NULL){
                    cout << "Sem registros para deletar"<< endl;
                }
                else{
                    topo = S.ExcluirShow(topo);
                    cout << "registro deletado"<<endl;
                }
                break;

            case 3:
                S.ListagemGeral(topo);
                break;
            case 4:
                S.ShowPlateia(topo);
                break;

            case 5:
                S.ShowLucro(topo);
                break;

            case 6:
                cout<<"Te vejo no show!"<<endl;
                break;

            default:
                cout<< "Opção inválida!"<<endl;
        }
        cout<<"Pressione enter para continuar: "<<endl;
        cin.ignore().get();

    }while(op!=6);
    return 0;
}
