#include <stdio.h>
#include <stdlib.h>

int main()
{
   float P1;
   float P2;
   float barato;

   printf("Digite o valor do primeiro produto:\n");
   scanf("%f", &P1);

   printf("Digite o valor do segundo produto:\n");
   scanf("%f", &P2);

   if (P1 < P2){
    barato = P2 - P1;
    printf("O produto 1 eh mais barato, e a diferenca dos precos eh de: %.2f", barato);
   }
   else {
    barato = P1 - P2;
    printf("O produto 2 eh mais barato, e a diferenca dos eh de: %.2f", barato);

   }
}
