#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    char Nome[50];
    char Matricula[50];
    char Email[50];
} Aluno;

int main()
{

    Aluno aluno1; //forma usando Gets
    int cont = 1;

    printf("Digite o nome do aluno %d \n",cont);
    gets(aluno1.Nome);

    printf("\nDigite a matricula do aluno %d \n",cont);
    gets(aluno1.Matricula);

    printf("\nDigite o email do aluno %d \n",cont);
    gets(aluno1.Email);

    printf("\nAs informacoes dadas foram:\n%s \n\n%s \n\n%s \n",aluno1.Nome,aluno1.Matricula,aluno1.Email);

}
