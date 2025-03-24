#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int EscolhaC; //escolha do curso do aluno
    int Contagem;
    int CC; //contagem de cursos
    int CA; //contagem de alunos
    int Opcao;
    int Opcao2 = 1; //opção do cadastro
    int Contagem2;
    char Aluno [50];
    char Matricula [50];
    char Codigosforadofile [50];

    //abrir os files e ler as informações dos cursos
    FILE *NomeAlunos;
    FILE *CursoAlunos;

    CursoAlunos = fopen("Cursos.txt", "r");
    fscanf(CursoAlunos, "%d", &CC );

    char Cursos [CC][50];
    char CodigosC [CC][50]; //Codigos dos cursos

    for (Contagem = 0; Contagem < CC; Contagem++){
        fscanf(CursoAlunos, "%s", CodigosC[Contagem]);
        fscanf(CursoAlunos, "%s", Cursos[Contagem]);
    }
    fclose(CursoAlunos);



    printf("Olá! Bem-vindo à escola CTC - Entra burro e sai ET!\n\n");
    while(Opcao != 4){

    printf("1 --- Cadastrar aluno ---\n");
    printf("2 --- Excluir aluno ---\n");
    printf("3 --- Exibir alunos ---\n");
    printf("4 --- Sair ---\n");

    printf("\nO que deseja fazer?\n");
    scanf("%d", &Opcao);

    system("cls");

    if(Opcao == 1){
        while (Opcao2 != 0){

        NomeAlunos = fopen("Alunos.txt", "a"); //se existir o arquivo, ele abre como "a"(atualization)

        if(!NomeAlunos) {
            NomeAlunos = fopen("Alunos.txt", "w"); //se não existir o arquivo, ele cria como "W" (write)
        }

        printf("Digite o nome do aluno (sem espaço):\n");
        scanf("%s", Aluno);

        fprintf(NomeAlunos, "%s\n", Aluno);

        printf("\nDigite o número de matrícula deste aluno (novamente, sem espaço):\n");
        scanf("%s", Matricula);

        fprintf(NomeAlunos, "%s\n", Matricula);

        printf("\nDigite o curso que deseja cadastrar da seguinte lista:\n");
        for (Contagem = 0; Contagem < CC; Contagem++){ //pegar os cursos do cursos.txt e exibir pro usuário
            printf("%d - %s\n", Contagem+1, Cursos[Contagem]);
        }
        scanf("%d", &EscolhaC);

        fprintf(NomeAlunos, "%s\n", CodigosC[EscolhaC-1]);

        fclose(NomeAlunos);
        system("cls");

        printf("Informações salvas com sucesso, deseja cadastrar mais um aluno?\n");
        printf("'1' para sim e '0' para não\n");

        scanf("%d", &Opcao2);
        system("cls");
        }

    }

    if(Opcao == 2){
        system("cls");

        NomeAlunos = fopen("Alunos.txt", "r");

        if(!NomeAlunos){
            printf("Nenhum aluno registrado no sistema\n\n");
        }

        else{

        fscanf(NomeAlunos, "%d", &CA);

        char TodosAlunos [CA][50];
        char TodasMatriculas [CA][50];
        char TodosCodigos [CA][50];
        int EscolhaAPAGAR;

        for (Contagem = 0; Contagem < CA; Contagem++){
            fscanf(NomeAlunos, "%s", TodosAlunos[Contagem]);
            fscanf(NomeAlunos, "%s", TodasMatriculas[Contagem]);
            fscanf(NomeAlunos, "%s", TodosCodigos[Contagem]);
        }
        fclose(NomeAlunos);

        printf("Qual aluno você deseja APAGAR?\n\n");

        for (Contagem = 0; Contagem < CA; Contagem++){
            printf("%d - %s\n", Contagem+1, TodosAlunos[Contagem]);
        }
        scanf("%d", &EscolhaAPAGAR);

        NomeAlunos = fopen("Alunos.txt", "w");

        for (Contagem = 0; Contagem < CA; Contagem++){
            if(Contagem == EscolhaAPAGAR-1){
                //nada acontece...
            }
            else{
                fprintf(NomeAlunos, "%s\n", TodosAlunos[Contagem]);
                fprintf(NomeAlunos, "%s\n", TodasMatriculas[Contagem]);
                fprintf(NomeAlunos, "%s\n", TodosCodigos[Contagem]);
            }
        }
        fclose(NomeAlunos);
        system("cls");
        }
    }

    if(Opcao == 3){

        //////////////////////////////////////
        CursoAlunos = fopen("Cursos.txt", "r");
        NomeAlunos = fopen("Alunos.txt", "r");
        //////////////////////////////////////

        if(!NomeAlunos){
            printf("Nenhum aluno registrado no sistema\n\n");
        }

            fscanf(NomeAlunos, "%d", &CA);
            for(Contagem = 0; Contagem < CA; Contagem++){ //mostrando os alunos cadastrados pro usuário
                printf("Aluno %d:\n\n",Contagem+1);

                fscanf(NomeAlunos, "%s", Aluno);
                printf("Nome - %s\n", Aluno);

                fscanf(NomeAlunos, "%s", Matricula);
                printf("Número de matrícula - %s\n", Matricula);

                fscanf(NomeAlunos, "%s", Codigosforadofile);
                printf("Código de turma - %s\n", Codigosforadofile);

                for(Contagem2 = 0; Contagem2 < CC; Contagem2++){
                if (strcmp(CodigosC[Contagem2], Codigosforadofile) == 0){
                    printf("Turma - %s\n\n", Cursos[Contagem2]);
                    }
                }
            }
        /////////////////////////
        fclose(CursoAlunos);
        fclose(NomeAlunos);
        /////////////////////////

        system("pause");
        printf("\n");
        system("cls");
    }
}
    system("cls");
    printf("Eu sei o que você fez no verão passado...\n");
    return 0;
}
