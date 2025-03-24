#include <stdio.h>
#include <string.h>

int main() {

  int mAlunos;
  mAlunos = 4;
  int mDisci;
  mDisci = 5;
  char alunos[4][50] = {0};
  char disciplinas[5][50] = {0};
  int boletim[4][5] = {0};
  int opcao;
  int TAlunos = 0;


 while(opcao != 5) {
    printf("\nOpcoes\ninserir alunos - 1\ninserir disciplinas - 2\ninserir notas\nver boletim - 4\nsair - 5\n");

    scanf("%d", &opcao);

    if (opcao == 1) {
     printf("\nQuantos Alunos voce quer registrar (max: 4):\n");
      int nAlunos;
      int mAlunos1;
      scanf("%d", &mAlunos1);
      TAlunos = TAlunos+mAlunos1;
      printf("entre com o nome dos alunos:\n");
      for (nAlunos= 0; nAlunos < mAlunos1; nAlunos++) {
        scanf("%s", alunos[nAlunos]);
        }
    }



if (opcao == 2) {
      printf("Quantas disciplinas voce quer registrar (max: 5):\n");
            int mDisci1;
            scanf("%d", &mDisci1);

            if (mDisci1 > mDisci) {
                printf("Limite de disciplinas excedido. Informe no máximo %d disciplinas.\n", mDisci);
            } else {
                printf("Entre com o nome das disciplinas de forma abreviada:\nEx: Biologia - Bio:\n");
                int algo;
                for (algo = 0; algo < mDisci1; algo++) {
                    char novaDisciplina[50];
                    scanf("%s", novaDisciplina);
                    int duplicada = 0;
                    for (int i = 0; i < algo; i++) {
                        if (strcmp(disciplinas[i], novaDisciplina) == 0) {
                            duplicada = 1;
                            break;
                        }
                    }

                    if (duplicada) {
                        printf("Disciplina ja informada anteriormente. Insira outra disciplina.\n");
                        algo--;
                    } else {
                        strcpy(disciplinas[algo], novaDisciplina);
                    }
                }
            }
}




  if (opcao == 3) {
      if (alunos[0][0] == '\0' || disciplinas[0][0] == '\0') {
        printf("Por favor, informe os alunos e as disciplinas primeiro.\n");
      } else {
        int alunolista, disciplinalista, nota;
        printf("Digite o número do aluno (1 a %d): ", mAlunos);
        scanf("%d", &alunolista);
        printf("Digite o número da disciplina (1 a %d): ", mDisci);
        scanf("%d", &disciplinalista);

        if (alunolista >= 1 && alunolista <= mAlunos &&
            disciplinalista >= 1 && disciplinalista <= mDisci) {
          printf("Digite a nota do aluno %d para a disciplina %d: ", alunolista,
                 disciplinalista);
          scanf("%d", &nota);
          boletim[alunolista - 1][disciplinalista - 1] = nota;
        } else {
          printf("Opção inválida.\n");
        }
      }
    } else
      if (opcao == 4) {

      if (alunos[0][0] == '\0' || disciplinas[0][0] == '\0') {
        printf("Por favor, informe os alunos e as disciplinas primeiro.\n");
      }
      else {
        printf("Boletim Eletronico\n");
        printf("%-10s", "Alunos");

        int algo6;
        for (algo6 = 0; algo6 < 5; algo6++) {
          printf("%-10s\n", disciplinas[algo6]);
        }

        int algo3;
        for (int algo3 = 0; algo3 < TAlunos; algo3++) {
          printf("%-10s", alunos[algo3]);
          int algo4;
          for (algo4 = 0; algo4 < 5; algo4++) {
            printf("%-10d\n", boletim[algo3][algo4]);
          }
        }
      }
    } else {}
 }
      if (opcao == 5) {

    printf("\ntchau tchau");
    }





    return 0;
}
