#include <iostream>
#include <stdlib.h>
#include "funcoes.h"
#define n 100

using namespace std;

int main()
{
    struct restaurante rest[n];
    int op, cont=0;


    do{
        cout << "1- Insira um novo restaurante" << endl;
        cout << "2- Liste todos os restaurante" << endl;
        cout << "3- Listar o restaurante com determinada avaliacao" << endl;
        cout << "4- Listar os restaurante com determinado tido de comida" << endl;
        cout << "5- Alterar dados do restaurante" << endl;
        cin >> op;
        switch(op)
        {
            case 1: cont = cont + inserir(rest, cont); break;
            case 2: listall(rest, cont); break;
            case 3: listava(rest, cont); break;
            case 4: listcomi(rest, cont); break;
            case 5: alterar(rest, cont); break;
        }
        system("pause");
        system("cls");
    }while(op<=5 && op >=1);

    return 0;
}
