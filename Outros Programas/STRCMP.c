#include <stdio.h>
#include <stdlib.h>

int main()
{
   char Resultado[1];

   scanf ("%s", Resultado);

   if(strcmp(Resultado,"V") == 0){ //== 0 caso os 2 textos forem iguais, no caso, a variavel "Resultado" e a letra "V"
    printf ("Venceu a partida!\n");
   }

   else{
    printf ("Perdeu a partida :c \n");
   }
}
