#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct stCardapiosDaSemana{
    char Alimentos [30][5];
    char Sucos [20];
    char Sobremesa [20];
}CDS;//Cardapios da semana;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    CDS DiasDaSemana [8]; //s�o todos os dias da semana que v�o conter um card�pio
    int Escolha; //guarda o que o usu�rio vai escolher fazer no menu
    int DiaSemana; //� o dia da semana que o usu�rio vai escolhar para cadastrar um card�pio
    int Cont;
    int ContZ; //Cont para zerar os valores das vari�veis

    //Esquema pra ele come�ar com tudo zerado, ou seja, com "Nada" registrado
    for(ContZ = 1;ContZ <= 7;ContZ++){
        for (Cont = 0; Cont < 5;Cont++){
            strcpy(DiasDaSemana[ContZ].Alimentos[Cont],"Nada");
        }
        strcpy(DiasDaSemana[ContZ].Sucos,"Nada");
        strcpy(DiasDaSemana[ContZ].Sobremesa,"Nada");
    }
    //Menuzinho top top
    while(Escolha != 4){

    printf("Bem vindo ao restaurante Pipipipopopo! Tens estas op��es\n\n");
    printf("1 - Cadastrar card�pio\n");
    printf("2 - Excluir card�pio\n");
    printf("3 - Exibir card�pio\n");
    printf("4 - Sair\n\n");
    printf("O que desejas fazer, caro cliente?\n");

    scanf("%d", &Escolha);

    system("cls");
    //Suas escolhas ter�o consequ�ncias...
    //E elas chegaram, aqui est�o as consequ�ncias
    if (Escolha == 1){
        printf("Deseja cadastrar o card�pio para qual dia da semana?\n\n");
        printf("1 - Domingo\n2 - Segunda-feira\n3 - Ter�a-feira\n4 - Quarta-feira\n5 - Quinta-Feira\n6 - Sexta-feira\n7 - S�bado\n\n");
        scanf("%d",&DiaSemana);

        for(Cont = 0; Cont < 5;Cont++){
            printf("\nDigite um alimento para colocar no card�pio deste dia ou 'T' para terminar de cadastrar os alimentos: \n");
            scanf("%s", DiasDaSemana[DiaSemana].Alimentos[Cont]);

            if(strcmp(DiasDaSemana[DiaSemana].Alimentos[Cont],"T") == 0){
                Cont = 5;
            }
        }
        printf("\nDigite o suco que voc� deseja ou 'N' para nenhum suco: \n");
        scanf("%s", DiasDaSemana[DiaSemana].Sucos);

        printf("\nDigite a sobremesa que voc� deseja ou 'N' para nenhuma sobremesa: \n");
        scanf("%s", DiasDaSemana[DiaSemana].Sobremesa);


    }
    if(Escolha == 2){
        printf("Digite o card�pio de qual dia da semana voc� deseja excluir");
        printf("1 - Domingo\n2 - Segunda-feira\n3 - Ter�a-feira\n4 - Quarta-feira\n5 - Quinta-Feira\n6 - Sexta-feira\n7 - S�bado\n\n");

        scanf("%d", &DiaSemana);

        for (Cont = 0; Cont < 5;Cont++){
            strcpy(DiasDaSemana[DiaSemana].Alimentos[Cont],"Nada");
        }
        strcpy(DiasDaSemana[DiaSemana].Sucos,"Nada");
        strcpy(DiasDaSemana[DiaSemana].Sobremesa,"Nada");
    }
    if(Escolha == 3){
        printf("\nDomingo:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[1].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[1].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[1].Sucos);

        printf("\n------------------------------------\n");

        //-------------SEPARA��O DE DIAS-------------\\

        printf("\nSegunda-Feira:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[2].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[2].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[2].Sucos);

        printf("\n------------------------------------\n");

        //-------------SEPARA��O DE DIAS-------------\\

        printf("\nTer�a-Feira:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[3].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[3].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[3].Sucos);

        printf("\n------------------------------------\n");

        //-------------SEPARA��O DE DIAS-------------\\

        printf("\nQuarta-Feira:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[4].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[4].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[4].Sucos);

        printf("\n------------------------------------\n");

        //-------------SEPARA��O DE DIAS-------------\\

        printf("\nQuinta-Feira:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[5].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[5].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[5].Sucos);

        printf("\n------------------------------------\n");

        //-------------SEPARA��O DE DIAS-------------\\

        printf("\nSexta-Feira:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[6].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[6].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[6].Sucos);

        printf("\n------------------------------------\n");

        //-------------SEPARA��O DE DIAS-------------\\

        printf("\nS�bado:\n");
        for(Cont = 0;Cont < 5;Cont++){
            printf("Alimentos:%s\n",DiasDaSemana[7].Alimentos[Cont]);
        }
        printf("\nSobremesa:%s\n",DiasDaSemana[7].Sobremesa);
        printf("Sucos:%s\n",DiasDaSemana[7].Sucos);

        printf("\n------------------------------------\n");

        system("Pause");
    }


    }
    printf("Adeus, caro cliente :-)");
    return 0;
}
