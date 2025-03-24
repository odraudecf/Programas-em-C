#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[5];
    float media;
    float notabaixa = 0;
    float soma = 0;
    int contagem = 0;

    while (contagem <5){
        printf("Digite a nota %d: \n", contagem);
        scanf("%f", &nota[contagem]);
        contagem++;
    }
        notabaixa = nota[0];

        if(nota[1] < notabaixa){
            notabaixa = nota[1];
        }
        if(nota[2] < notabaixa){
            notabaixa = nota[2];
        }
        if(nota[3] < notabaixa){
            notabaixa = nota[3];
        }
        if(nota[4] < notabaixa){
            notabaixa = nota[4];
        }


    soma = nota[0] + nota[1] + nota[2] + nota[3] + nota[4] - notabaixa;
    media = soma / 5;

    printf ("A media das notas foi: %.2f", media);
}
