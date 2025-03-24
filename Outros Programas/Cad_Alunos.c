#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Curso [4];
    char Aluno [25];
    char Continuar [4];
    char AlunoMCRTII [25]; //aluno com maior CR do TII
    char AlunoMCRTGI [25]; //aluno com maior CR do TGI
    char AlunoMCRTAI [25]; //aluno com maior CR do TAI
    int cont;
    int TII = 0; //o melhor curso
    int TGI = 0; //o curso mediano
    int TAI = 0; //o pior dos piores
    float CR;
    float MaiorCRTII = 0;
    float MaiorCRTAI = 0;
    float MaiorCRTGI = 0;
    float STII = 0; //soma CR do TII
    float STAI = 0; //soma CR do TAI
    float STGI = 0; //soma CR do TGI
    float MediaTGI;
    float MediaTII;
    float MediaTAI;

    for (cont = 1; cont <=20; cont++) {
        printf("Digite o nome do aluno ou 'sair': \n");
        scanf("%s", Aluno);

        if (strcmp (Aluno, "sair") ==0){
            break;
        }

        printf("Digite o curso do aluno %s: (TII,TGI ou TAI) \n", Aluno);
        scanf("%s", Curso);

        printf("Digite o CR do aluno %s: \n", Aluno);
        scanf("%f", &CR);

        if (strcmp (Curso, "TII") ==0){
            TII++;
            STII = STII + CR;
            if (CR > MaiorCRTII){
                MaiorCRTII = CR;
                strcpy (AlunoMCRTII,Aluno);
            }
    }
        if (strcmp (Curso, "TGI") ==0){
            TGI++;
            STGI = STGI + CR;
            if (CR > MaiorCRTGI){
                MaiorCRTGI = CR;
                strcpy (AlunoMCRTGI,Aluno);
        }
    }
        if (strcmp (Curso, "TAI") ==0){
            TAI++;
            STAI = STAI + CR;
            if (CR > MaiorCRTAI){
                MaiorCRTAI = CR;
                strcpy (AlunoMCRTAI,Aluno);
        }
    }
        printf("Deseja colocar outro aluno? ('Nao' para sair) \n");
        scanf("%s", Continuar);

        if (strcmp (Continuar,"Nao") == 0 ) {
            break;
        }
}
    if (TAI == 0){
        printf("\n Nao foram informados alunos do TAI \n \n");
    }
    if (TAI > 0){
        printf("\nA quantidade de alunos do TAI eh: %d \n", TAI);
        MediaTAI = STAI / TAI;
        printf("A media dos alunos do TAI eh: %.2f \n", MediaTAI);
        printf("O maior CR foi de %.2f pelo aluno %s \n \n",MaiorCRTAI,AlunoMCRTAI);
    }

    if (TII == 0){
        printf("Nao foram informados alunos do TII \n \n");
    }
    if (TII > 0){
        printf("A quantidade de alunos do TII eh: %d \n", TII);
        MediaTII = STII / TII;
        printf("A media dos alunos do TII eh: %.2f \n", MediaTII);
        printf("O maior CR foi de %.2f pelo aluno %s \n \n",MaiorCRTII,AlunoMCRTII);
    }
    if (TGI == 0){
        printf("Nao foram informados alunos do TGI \n \n");
    }
    if (TGI > 0){
        printf("A quantidade de alunos do TGI eh: %d \n", TGI);
        MediaTGI = STGI / TGI;
        printf("A media dos alunos do TGI eh: %.2f \n", MediaTGI);
        printf("O maior CR foi de %.2f pelo aluno %s \n \n",MaiorCRTGI,AlunoMCRTGI);
    }
}
