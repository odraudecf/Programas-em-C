#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    float area;
    float lado1;
    float lado2;

    printf("Digite o valor da base:\n");
    scanf("%f", &base);

    printf("Digite o valor do primeiro lado:\n");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado:\n");
    scanf("%f", &lado2);

    printf("Digite o valor da altura:\n");
    scanf("%f", &altura);

    area = (altura * base) /2;

    printf("A area do triangulo tem o valor de %.2f \n", area);

    if (lado1 == lado2){

            if (lado1 != base){
            printf("O seu triangulo eh isosceles \n");
        }
            if (lado1 == base){
            printf("O seu triangulo eh equilatero \n");
        }
    }

    else{

        if (lado2 == base){
        printf("O seu triangulo eh isosceles \n");

        }

        if (lado1 == base){
            printf("O seu triangulo eh isosceles");
        }

        else{

            printf("o seu triangulo eh escaleno \n");
        }
    }




}

