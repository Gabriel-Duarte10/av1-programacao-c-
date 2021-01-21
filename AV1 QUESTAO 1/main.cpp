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
        LeAluno(Turma, i);  // função que lê de teclado
                           // os dados do aluno
    }
    cout << endl;
    ImprimeTurma(Turma); //Função que imprime os dados de todos os alunos
    cout << endl;
    for(i=0; i< 5; i++)
    {
        media = CalculaMediaAluno(Turma, i);// função que calcula a média das notas de um aluno

        imprimedadosAluno(Turma, media, i); // imprime os dados do aluno
    }
    return 0;
}
