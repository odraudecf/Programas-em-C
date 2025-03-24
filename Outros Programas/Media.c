#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    float soma = 0;
    float media;
    int cont;
    int notaspositivas = 0;

    for(cont = 1;cont <= 5; cont++)
    {
        printf("Insira uma nota %d:\n", cont);
        scanf("%f", &nota);
        if(nota >= 0)
        {
                soma = soma + nota;
                notaspositivas++;
        }
    }
    media = soma / notaspositivas;

    printf("A media das notas foi: %.2f \n", media);
    printf("A soma das notas foi: %.2f", soma);
}
