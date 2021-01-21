#include <iostream>

using namespace std;

struct restaurante
{
    string nomerest, endereco, tipocomida;
    int nota;
};

int inserir (struct restaurante *resta, int contador)
{
        cout << "Digite o nome do restaurante: ";
        cin.ignore();
        getline(cin,resta[contador].nomerest);
        cout << "Digite o endereco do restaurante: ";
        getline(cin,resta[contador].endereco);
        cout << "Digite o tipo de comida: ";
        getline(cin,resta[contador].tipocomida);
        cout << "Digite a nota do restaurante: ";
        cin >> resta[contador].nota;

    return 1;
}
void listall(struct restaurante *resta, int contador)
{
    int i;
    for(i=0;i<contador;i++)
    {
        cout << "Nome: " << resta[i].nomerest << endl;
        cout << "Endereco: " << resta[i].endereco << endl;
        cout << "Tipo de comida: " << resta[i].tipocomida << endl;
        cout << "Nota: " << resta[i].nota << endl << endl;
    }
}
void listava(struct restaurante *resta, int contador)
{
    int i, nota;
    cout << "Nota do restaurante desejado para cima:  ";
    cin >> nota;
    for(i=0;i<contador;i++)
    {
        if(resta[i].nota>
           nota)
        {
            cout << "Nome: " << resta[i].nomerest << endl;
            cout << "Endereco: " << resta[i].endereco << endl;
            cout << "Tipo de comida: " << resta[i].tipocomida << endl;
            cout << "Nota: " << resta[i].nota << endl << endl;
        }
    }
}
void listcomi(struct restaurante *resta, int contador)
{
    int i, test=0;
    string tipo;
    cout << "Digite o tipo de restaurante a ser procurado: ";
    cin.ignore();
    getline(cin,tipo);

    for(i=0;i<contador;i++)
    {
        if(resta[i].tipocomida == tipo)
        {
            cout << "Nome: " << resta[i].nomerest << endl;
            cout << "Endereco: " << resta[i].endereco << endl;
            cout << "Tipo de comida: " << resta[i].tipocomida << endl;
            cout << "Nota: " << resta[i].nota << endl;
            test =1;
        }
    }
     if(test==0)
    {
        cout << "Nao encontrado" << endl;
    }
}
void alterar(struct restaurante *resta, int contador)
{
    int i, escolha, test=0;
    string nome;
    cout << "Digite o nome do restaurante a ser alterado: ";
    cin.ignore();
    getline(cin,nome);

    for(i=0;i<contador;i++)
    {
        if(resta[i].nomerest == nome)
        {
            cout << "1- alterar nome" << endl;
            cout << "2- alterar endereco" << endl;
            cout << "3- alterar tipo do restaurante" << endl;
            cout << "4- alterar nota avaliativa" << endl;
            cout << "5- alterar tudo" << endl;
            cin >> escolha;
            switch(escolha)
            {
                case 1: cout << "Novo nome: ";
                        cin.ignore();
                        getline(cin,resta[i].nomerest);
                        test=1;
                        break;
                case 2: cout << "Novo endereco: ";
                        cin.ignore();
                        getline(cin,resta[i].endereco);
                        test=1;
                        break;
                case 3: cout << "Novo tipo do restaurante: ";
                        cin.ignore();
                        getline(cin,resta[i].tipocomida);
                        test=1;
                        break;
                case 4: cout << "Nova nota avaliativa: ";
                        cin >> resta[i].nota;
                        test=1;
                        break;

                case 5: cout << "Novo nome: ";
                        cin.ignore();
                        getline(cin,resta[i].nomerest);

                        cout << "Novo endereco: ";
                        getline(cin,resta[i].endereco);

                        cout << "Novo tipo do restaurante: ";
                        getline(cin,resta[i].tipocomida);

                        cout << "Nova nota avaliativa: ";
                        cin >> resta[i].nota;
                        test=1;
                        break;
            }
        }
    }
    if(test==0)
    {
        cout << "Nao encontrado" << endl;
    }
}

