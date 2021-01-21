#include <iostream>

using namespace std;

typedef struct{
   int matricula;
   float notas[3];

}Aluno;

void LeAluno(Aluno *people, int i)
{
    int j;
        cout << "Digite a matricula do aluno: ";
        cin >> people[i].matricula;
        for(j=0;j<3;j++)
        {
            cout << "Digite a nota " << j+1 << " : ";
            cin >> people[i].notas[j];
        }
}
void ImprimeTurma(Aluno *people)
{
    int i, j;
    for(i=0;i<5;i++)
    {
        cout << "matricula: " << people[i].matricula << endl;
        for(j=0;j<3;j++)
        {
            cout << "Nota " << j+1 << ": " << people[i].notas[j] << endl;;
        }
    }
}
float CalculaMediaAluno(Aluno *people, int i)
{
    float  media;
    int j;

        for(j=0;j<3;j++)
        {
            media = people[i].notas[j] + media;
        }
        media = media/3;
    return media;
}
void imprimedadosAluno(Aluno *people, float media, int i)
{
        cout << "Matricula: " << people[i].matricula << endl;
        cout << "Media: " << media << endl;
}



