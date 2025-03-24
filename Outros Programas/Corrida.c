#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempoatleta;
    float recordemundial;
    float recordeolimpico;

    printf ("Digite o tempo da sua corrida: \n");
    scanf ("%f", &tempoatleta);

    printf ("Digite o recorde mundial: \n");
    scanf ("%f", &recordemundial);

    printf ("Digite o recorde olimpico: \n");
    scanf ("%f", &recordeolimpico);

    if (tempoatleta < recordemundial){

        if (tempoatleta < recordeolimpico){
            printf ("Voce quebrou o recorde mundial e o recorde olimpico! ");
        }
        if (tempoatleta > recordeolimpico){
            printf ("Voce quebrou o recorde mundial!");
        }
    }
    else{

        if (tempoatleta < recordeolimpico){
            printf ("Voce quebrou o recorde olimpico!");
        }
        if (tempoatleta > recordeolimpico){
            printf ("Infelizmente, voce nao quebrou nenhum recorde");
        }
    }

}
/*
___    .-"""-.    ___
\  \  /\ \ \ \\  /  /
 }  \/\ \ \ \ \\/  {    A candy!!
 }  /\ \ \ \ \ /\  {
/__/  \ \ \ \ /  \__\
       '-...-'
*/
