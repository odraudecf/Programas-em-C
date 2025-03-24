#include <stdio.h>
#include <stdlib.h>

int main()
{


    float produto1;
    float produto2;
    float soma;
    float desconto;

    printf("Digite o valor do primeiro produto\n");
    scanf("%f", &produto1);

    printf("Digite o valor do segundo produto\n");
    scanf("%f", &produto2);

    soma = produto1 + produto2;

    if (soma >=20)
    {
        desconto = soma * (5/100.0);
        soma = soma - desconto;
        printf("O desconto foi de %.2f\n", desconto);
        printf("O valor total da compra com desconto foi: %.2f", soma);
    }
    else
    {
       printf("O valor total da compra sem desconto foi: %.2f", soma);
    }

}
