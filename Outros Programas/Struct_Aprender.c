#include <stdio.h>
#include <stdlib.h>

typedef struct Computador{
    char marca[30];
    float preco;
    int HD;
    int Memoria;

}PC;
//typedef struct Computador PC; typedef dá um apelido para algo, dá outro nome. typedef "nome do que voce quer mudar" "nome que voce quer que fique".
//variavel primitiva: int, float, char | variavel definida: Struct (basicamente)

int main()
{
    PC Comp1;
    PC Comp2;

    scanf("%f", &Comp1.preco); //variavel preço que está dentro da variavel Comp1, porque a mesma está dentro da struct PC.
    printf("O preco eh %.2f \n", Comp1.preco);
}
