#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cont=0;
   for(cont=0; cont<10; cont++){
        printf("For - cont vale %d\n", cont);
   }
   cont=0;
   while(cont<10){
    printf("While - cont vale %d\n", cont);
    cont++;
   }
}
