#include <iostream>
#include "FUNCOES.h"

using namespace std;

int main()
{
    Aluno Turma[5];
    int i;
    float media;
    for(i=0; i< 5; i++)
    {
        LeAluno(Turma, i);  // fun��o que l� de teclado
                           // os dados do aluno
    }
    cout << endl;
    ImprimeTurma(Turma); //Fun��o que imprime os dados de todos os alunos
    cout << endl;
    for(i=0; i< 5; i++)
    {
        media = CalculaMediaAluno(Turma, i);// fun��o que calcula a m�dia das notas de um aluno

        imprimedadosAluno(Turma, media, i); // imprime os dados do aluno
    }
    return 0;
}
