#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ArqTodosPersonagens;

    ArqTodosPersonagens = fopen("TodosPers.txt", "r");

    int NumTotPers;

    fscanf(ArqTodosPersonagens, "%d", &NumTotPers);

    fclose(ArqTodosPersonagens);

    int Opc;
    char TodosNomesPers [NumTotPers][255];
    char NomeDel [255];
    char NomeArq [255];
    char NomeArqAlt [255];
    char NomePers [255];
    char NomeAlt [255];
    char Poder [255];
    int Nivel;
    char Classe [255];

    printf("AVISO - Toda vez que um personagem for cadastrado, o usuario devera abrir o arquivo 'TodosPers.txt' e colocar o numero total de personagens listados na primeira linha\n\n");
    system("pause");
    system("cls");

    while (Opc != 6){
            strcpy(NomeArq, "");
            strcpy(NomeArqAlt, "");

        printf("Catalogo de Personagens\n\n");
        printf("1 - Cadastrar Personagem\n");
        printf("2 - Alterar Personagem\n");
        printf("3 - Excluir Personagem\n");
        printf("4 - Visualizar Todos Personagens Cadastrados\n");
        printf("5 - Visualizar Um Personagem Cadastrado\n");
        printf("6 - Sair\n\n");
        printf("O que deseja fazer?\n--> ");

        scanf("%d", &Opc);
        system("cls");

        if (Opc == 1){

            printf("Escolheu Cadastrar Personagem:\n");

            printf("\nNome: ");
            scanf("%s", NomePers);

            printf("\nPoder: ");
            scanf("%s", Poder);

            printf("\nNivel: ");
            scanf("%d", &Nivel);

            printf("\nClasse: ");
            scanf("%s", Classe);

            strcpy(NomeArq, NomePers);
            strcat(NomeArq, ".txt");

            FILE *ArqPersonagem;
            ArqPersonagem = fopen(NomeArq , "w");

            fprintf(ArqPersonagem, "%s\n", NomePers);
            fprintf(ArqPersonagem, "%s\n", Poder);
            fprintf(ArqPersonagem, "%d\n", Nivel);
            fprintf(ArqPersonagem, "%s", Classe);

            fclose(ArqPersonagem);

            FILE *ArqTodosPersonagens;
            ArqTodosPersonagens = fopen("TodosPers.txt" , "a");

            if (!ArqTodosPersonagens){
                ArqTodosPersonagens = fopen("TodosPers.txt" , "w");
            }

            fprintf(ArqTodosPersonagens, "\n%s", NomePers);

            fclose(ArqTodosPersonagens);

            system("cls");
            printf("Personagem cadastrado com sucesso!\n");

        }

       else if (Opc == 2){

            printf("Escolheu Alterar Personagem:\n");

            printf("Nome do personagem que deseja alterar: ");
            scanf("%s", NomePers);

            strcpy(NomeArq, NomePers);
            strcat(NomeArq, ".txt");

            printf("\nNovo nome: ");
            scanf("%s", NomeAlt);

            printf("\nNovo poder: ");
            scanf("%s", Poder);

            printf("\nNovo nivel: ");
            scanf("%d", &Nivel);

            printf("\nNova classe: ");
            scanf("%s", Classe);

            strcpy(NomeArqAlt, NomeAlt);
            strcat(NomeArqAlt, ".txt");

            rename(NomeArq, NomeArqAlt);

            FILE *ArqPersonagem;
            ArqPersonagem = fopen(NomeArqAlt , "w");

            fprintf(ArqPersonagem, "%s\n", NomeAlt);
            fprintf(ArqPersonagem, "%s\n", Poder);
            fprintf(ArqPersonagem, "%d\n", Nivel);
            fprintf(ArqPersonagem, "%s", Classe);

            fclose(ArqPersonagem);

            FILE *ArqTodosPersonagens;
            ArqTodosPersonagens = fopen("TodosPers.txt" , "r");

            fscanf(ArqTodosPersonagens, "%d", &NumTotPers);

            int cont = 0;

            char TodosNomesPers1 [NumTotPers][255];

            for (cont = 0; cont < NumTotPers; cont++){
                fscanf(ArqTodosPersonagens, "%s", TodosNomesPers1[cont]);
            }
            fclose(ArqTodosPersonagens);

            ArqTodosPersonagens = fopen("TodosPers.txt" , "w");

            fprintf(ArqTodosPersonagens, "%d\n", NumTotPers);

            for (cont = 0; cont < NumTotPers; cont++){
                if (strcmp(TodosNomesPers1[cont], NomePers) == 0){
                    fprintf(ArqTodosPersonagens, "%s\n", NomeAlt);
                }
                else{
                    fprintf(ArqTodosPersonagens, "%s\n", TodosNomesPers1[cont]);
                }
            }

            fclose(ArqTodosPersonagens);
            system("cls");
            printf("Personagem alterado com sucesso!\n");

        }

        else if (Opc == 3){

            printf("Escolheu Deletar um Personagem Cadastrado:\n");

            printf("Nome do personagem que deseja deletar: ");
            scanf("%s", NomeDel);

            strcpy(NomeArq, NomeDel);
            strcat(NomeArq, ".txt");

            remove(NomeArq);

            FILE *ArqTodosPersonagens;
            ArqTodosPersonagens = fopen("TodosPers.txt" , "r");

            fscanf(ArqTodosPersonagens, "%d", &NumTotPers);

            int cont = 0;

            char TodosNomesPers1 [NumTotPers][255];

            for (cont = 0; cont < NumTotPers; cont++){
                fscanf(ArqTodosPersonagens, "%s", TodosNomesPers1[cont]);
            }
            fclose(ArqTodosPersonagens);

            ArqTodosPersonagens = fopen("TodosPers.txt" , "w");

            fprintf(ArqTodosPersonagens, "%d\n", NumTotPers-1);

            for (cont = 0; cont < NumTotPers; cont++){
                if (strcmp(TodosNomesPers1[cont], NomeDel) == 0){

                }
                else{
                    fprintf(ArqTodosPersonagens, "%s\n", TodosNomesPers1[cont]);
                }
            }

            fclose(ArqTodosPersonagens);

            system("cls");
            printf("Personagem deletado com sucesso!\n");
        }

        else if (Opc == 4){
            printf("Escolheu Visualizar Todos Personagens Cadastrados");

            FILE *ArqTodosPersonagens;
            ArqTodosPersonagens = fopen("TodosPers.txt" , "r");

            fscanf(ArqTodosPersonagens, "%d", &NumTotPers);

            int cont = 0;

            char TodosNomesPers1 [NumTotPers][255];

            for (cont = 0; cont < NumTotPers; cont++){
                fscanf(ArqTodosPersonagens, "%s", TodosNomesPers1[cont]);
            }
            fclose(ArqTodosPersonagens);

            FILE *ArqPersonagem;

            for (cont = 0; cont < NumTotPers; cont++){
                strcpy(NomeArq, TodosNomesPers1[cont]);
                strcat(NomeArq, ".txt");

               ArqPersonagem = fopen(NomeArq, "r");

                fscanf(ArqPersonagem, "%s", NomePers);
                fscanf(ArqPersonagem, "%s", Poder);
                fscanf(ArqPersonagem, "%d", &Nivel);
                fscanf(ArqPersonagem, "%s", Classe);

                printf("\nNome: %s\n", NomePers);
                printf("\nPoder: %s\n", Poder);
                printf("\nNivel: %d\n", Nivel);
                printf("\nClasse: %s\n\n", Classe);

                fclose(ArqPersonagem);
            }

        }

        else if (Opc == 5){
            printf("Escolheu Visualizar um Personagem Cadastrado:\n");

            printf("Nome do personagem que deseja visualizar: ");
            scanf("%s", NomePers);

            strcpy(NomeArq, NomePers);
            strcat(NomeArq, ".txt");

            FILE *ArqPersonagem;
            ArqPersonagem = fopen(NomeArq, "r");

            fscanf(ArqPersonagem, "%s", NomePers);
            fscanf(ArqPersonagem, "%s", Poder);
            fscanf(ArqPersonagem, "%d", &Nivel);
            fscanf(ArqPersonagem, "%s", Classe);

            printf("\nNome: %s\n", NomePers);
            printf("\nPoder: %s\n", Poder);
            printf("\nNivel: %d\n", Nivel);
            printf("\nClasse: %s\n\n", Classe);

            fclose(ArqPersonagem);

        }
    }
    return 0;
}
