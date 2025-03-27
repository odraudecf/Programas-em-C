#include <stdio.h>
#include <stdlib.h>

int main()
{
    int QuantNotas;

    printf("Quantas notas deseja inserir?\n");
    scanf("%d", &QuantNotas);

    int Nota[QuantNotas];
    int Soma = 0;
    float Media = 0;

    system("cls");

    printf("Quantidade de notas a serem inseridas: %d\n\n", QuantNotas);

    for(int i = 0; i < QuantNotas; i++){

        printf("Digite a nota %d:", i+1);
        scanf("%d", &Nota[i]);

        Soma = Soma + Nota[i];

    }

    Media = Soma/QuantNotas;

    printf("\nQuantidade de notas inseridas: %d\n", QuantNotas);
    printf("Soma das notas: %d\n", Soma);
    printf("Media das notas: %.2f\n", Media);

    return 0;
}
