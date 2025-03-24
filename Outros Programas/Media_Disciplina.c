#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float media;
    char disciplina [15];

    printf("Digite a disciplina\n");
    scanf("%s", disciplina);

    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3);

    printf("A sua media da materia %s foi:%.2f", disciplina, media);
    if (media >=60)
    {
        printf("\nAprovado, parabens!");
    }
    else
    {
        printf("\nVoce esta de dependecia em %s", disciplina);
    }
}
