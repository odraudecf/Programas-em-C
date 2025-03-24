#include <stdio.h>
#include <stdlib.h>

int main() //eu ia fazer diferentes tipos de navios, porque eu realmente gostei demais de fazer esse codigo, mas né, o tempo tava meio apertado.
{          //na verdade, eu já tenho até uma ideia de como fazer, usando contL + 1 e ContL - 1 para os barcos, por exemplo, um destroyer teria 3 de largura, então seria contL - 1, contL e contL + 1 que receberiam o valor de 6, que significaria que naquele lugar tem um destroyer e tal...
    int T1 [6][6]; //Tabuleiro 1 (bot)
    int T2 [6][6]; //Tabuleiro 2 (player)

    int Cont; //Contagem de navios
    int ContL; //Contagem de linha
    int ContC; //Contadem de colunan

    //zerar valores das tabelas
    //tabuleiro do bot
    for (ContL = 0;ContL <=5;ContL++){
        for (ContC = 0;ContC <=5;ContC++){
            T1 [ContL][ContC] = 0;
        }
    }
    //tabuleiro do player
    for (ContL = 0;ContL <=5;ContL++){
        for (ContC = 0;ContC <=5;ContC++){
            T2 [ContL][ContC] = 0;
        }
    }
    //menuzinho top top, do balacobaco

    char Coiso [20]; //é o que o player decide fazer no menu
    while (strcmp (Coiso,"Jogar") != 0){

    printf("\nOi jogador! Digite o que deseja fazer\n\n");
    printf("-----------------------\n");
    printf("    --  Jogar   --\n");
    printf("    -  Tutorial  -\n"); //ficou meio torto, mas ninguem vai notar, né??
    printf("    --  Sair    --\n");
    printf("-----------------------\n");

    scanf("%s",Coiso);

    if(strcmp(Coiso, "Sair") == 0){
        printf("\nAdeus, caro jogador!\n");
        exit(0); //para sair da execução, dá pra adicionar um argument no "()".
    }
    else if (strcmp(Coiso, "Tutorial") == 0){
        printf("\nO jogo que voce vai jogar eh batalha naval, meio que nao precisa de tutorial...\n");
        printf("Mas ainda assim, existem 2 tabuleiros de 6 por 6, um do oponente e um seu.\nAo iniciar, voce ira escolher onde deseja posicionar os navios 'N' (eles ficarao marcados no tabuleiro)\n");//Batata.
        printf("Ao posicionar os navios, comeca a fase de ataque, voce deve digitar uma linha e uma coluna para atacar.\nSe tiver um navio inimigo naquele lugar, ele sera destruido e tu poderas atacar de novo, se tiver agua, chore\n");                                                                                              //42
        printf("Ganha quem destruir os 5 barcos primeiro\n\n"); //sem nenhum acento, nem ç
        system("pause");
        system("cls");

    }
    else{
        printf("\nDesculpe, mas voce deve ter digitado algo errado... \nVerifique se faltou alguma letra maiuscula\n");
    }
}//fechando no whlle
    system("cls"); //dar aquela limpada no menu
    //sortear coisas do bot

    int N; //numero sorteado pelo bot
    int LB; //Linha sorteada do bot
    int CB; //Coluna sorteada do bot
    srand(time(NULL)); //seed do random = horario do computador

    for (Cont = 0; Cont < 5; Cont++){
        N = rand();
        LB = N % 6;

        N = rand();
        CB = N % 6;

        if (T1 [LB][CB] == 1){
            Cont--;
        }
        T1 [LB][CB] = 1;

        //printf("Linha %d - Coluna %d - se tiver navio %d \n \n", LB + 1,CB + 1,Cont); //isso foi só um teste (:
    }//o +1 é para mostrar certo, pois as matrizes que tem 6 espaços variam de 0 1 2 3 4 5

    //posicionamento do player
    int LP; //Linha do Player
    int CP; //Coluna do Player

    printf("\nAHRRRR MARUJO! O INIMIGO ATACA!!! \n");
    printf("Rapido, posicione os barcos!!! \n\n");

    for (Cont = 0; Cont < 5; Cont++){
    //mostrar tabuleiros na repetição pro player ter uma noção de onde ele está posicionando os barcos
    //tabuleiro do bot
    printf("-------Tabuleiro do oponente-------\n");
    printf("     1  2  3  4  5  6 \n"); //ficou de uma forma muito porca, mas é o que deu pra fazer
     printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    for (ContL = 0;ContL <=5;ContL++){
        printf(" %d %c", ContL + 1,186);
        for (ContC = 0;ContC <=5;ContC++){
            printf(" - ");
        }
        printf("%c",186);
        printf("\n");
    }
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    //tabuleiro do player
    printf("\n-------Tabuleiro do marujo-------\n");
    printf("     1  2  3  4  5  6 \n");
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    for (ContL = 0;ContL <=5;ContL++){
        printf(" %d %c", ContL + 1,186);
        for (ContC = 0;ContC <=5;ContC++){
            if (T2 [ContL][ContC] == 1){
                printf(" N ");
            }
            else{
                printf(" ~ ");
            }
        }
        printf("%c",186);
        printf("\n");
    }
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

        printf("\nDigite a linha onde quer posicionar o barco %d (de 1 a 6)\n", Cont + 1);
        scanf("%d", &LP);
        LP = LP - 1;

        //usei essa subtração de -1 para ficar intuitivo ao player sobre qual linha/coluna está colocando o barco
        //achei que ficaria estranho dizer "coloque o barco na linha 0 e coluna 2", não sei. Assim ficou melhor, eu acho
        //mesma coisa com o cont + 1, achei que dizer pro player "posicione o barco 0" seria estranho e confuso :)

        printf("Digite a coluna onde quer colocar o barco %d (de 1 a 6)\n", Cont + 1);
        scanf("%d", &CP);
        CP = CP - 1;

        system("cls");

        if (T2 [LP] [CP] == 1){
            printf("MARUJO!!! Havia um barco no lugar onde tu posicionou!\n Posicione novamente AHRRR!\n");
            Cont--;
        }
        T2 [LP] [CP] = 1;
    }

    //agora a diversão começa, TIROS!!!

    int ContB = 5; //Contagem de navios do bot
    int ContP = 5; //Contagem de navios do player
    int Jogada = 0; //Variavel que mostra qual player irá jogar

    printf("OS VENTOS ESTAO AO NOSSO FAVOR, COMECAREMOS ATACANDO!!!\n\n");

    while (ContB != 0 && ContP != 0){
    while(Jogada == 0){
    //tabuleiro do bot
    printf("-------Tabuleiro do oponente-------\n");
    printf("     1  2  3  4  5  6 \n");
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    for (ContL = 0;ContL <=5;ContL++){
        printf(" %d %c", ContL + 1,186);
        for (ContC = 0;ContC <=5;ContC++){
            if (T1[ContL][ContC] == 3){
                printf(" a "); //pra mostrar que só havia agua
            }
            /*else if (T1[ContL][ContC] == 1){
                printf(" N "); //wallhack de easter egg, como nos velhos tempos
            } */
            else if (T1[ContL][ContC] == 2){
                printf(" X "); //pra mostrar que havia um barco e foi destruido
            }
            else {
            printf(" - "); //fog        esse sistema foi usado só pra ir revelando a fog of war, eu acho que ficaria daora.
            }
        }
        printf("%c",186);
        printf("\n");
    }
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n-----------------------------------\n");

    //tabuleiro do player
    printf("\n-------Tabuleiro do marujo-------\n");
    printf("     1  2  3  4  5  6 \n");
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    for (ContL = 0;ContL <=5;ContL++){
        printf(" %d %c", ContL + 1,186);
        for (ContC = 0;ContC <=5;ContC++){
            if (T2 [ContL][ContC] == 1){
                printf(" N ");
            }
            else if (T2 [ContL][ContC] == 2){
                printf(" X "); // se acertar navio
            }
            else if (T2 [ContL][ContC] == 3){
                printf(" O "); // se acertar agua
            }
            else{
                printf(" ~ ");
            }
        }
        printf("%c",186);
        printf("\n");
    }
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n-----------------------------------\n");

        printf("Agora eh a nossa vez!!!\n");
        printf("Diga marujo, em que linha devemos atacar? (novamente de 1 a 6)\n");
        scanf("%d", &LP);
        LP = LP - 1;

        printf("E em qual coluna, marujo?\n");
        scanf("%d", &CP);
        CP = CP - 1;

        if (T1 [LP][CP] == 1){
            ContB--;
            printf("ACERTOU EM CHEIO MARUJO AHRRGGGG!!!\n\n");
            T1 [LP][CP] = 2; //2 = barco destruido
            if (ContB == 0){
                break;
            }
            printf("\nRecarregando os canhoes...\n");
            system("pause");
            system("cls");
        }

        else if ((T1 [LP][CP] == 2) || (T1[LP][CP] == 3)){
            printf("Marujo! Tu ja atiraste nessa regiao!!!\n");
        }

        else {
            printf("*SPLASH* Nosso tiro errou o barco inimigo, marujo!!!\n\n");
            T1 [LP][CP] = 3; //3 = agua
            Jogada = 1;
            sleep(2);
        }
    }//Colchete fechando o While do player
        while(Jogada == 1){
        printf("UM TIRO INIMIGO A CAMINHO!\n");

        LP = 0;
        CP = 0;

        N = rand(); //reutilizando variáveis desde sempre
        LB = N % 6;

        N = rand();
        CB = N % 6;

        if (T2 [LB] [CB] == 1){
            ContP--;
            printf("AHRRGGGGG um de seus navios foi acertado e afundou!\n");
            T2 [LB] [CB] = 2;
            sleep(2);
            if(ContP == 0){
                break;
            }
        }
        else if ((T2 [LB][CB] == 2) || (T2 [LB][CB] == 3)){
            printf("O inimigo atirou duas vezes no mesmo lugar, vamos dar outra chance para ele\n");
            sleep(2);
        }
        else{
            printf("*SPLASH* O inimigo errou o tiro!\n");
            T2 [LB][CB] = 3;
            Jogada = 0;
            sleep(2);
            system("cls");
        }
    }//Colchete fechando o While do bot

}//quando alguem ganha, seja o bot ou o player
    system("cls");
    //tabuleiro do bot
    printf("-------Tabuleiro do oponente-------\n");
    printf("     1  2  3  4  5  6 \n");
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    for (ContL = 0;ContL <=5;ContL++){
        printf(" %d %c", ContL + 1,186);
        for (ContC = 0;ContC <=5;ContC++){
            if (T1[ContL][ContC] == 3){
                printf(" a "); //pra mostrar que só havia agua
            }
            else if (T1[ContL][ContC] == 2){
                printf(" X "); //pra mostrar que havia um barco e foi destruido
            }
            else {
            printf(" - "); //fog
            }
        }
        printf("%c",186);
        printf("\n");
    }
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n-----------------------------------\n");

    //tabuleiro do player
    printf("\n-------Tabuleiro do marujo-------\n");
    printf("     1  2  3  4  5  6 \n");
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    for (ContL = 0;ContL <=5;ContL++){
        printf(" %d %c", ContL + 1,186);
        for (ContC = 0;ContC <=5;ContC++){
            if (T2 [ContL][ContC] == 1){
                printf(" N ");
            }
            else if (T2 [ContL][ContC] == 2){
                printf(" X "); // se acertar navio
            }
            else if (T2 [ContL][ContC] == 3){
                printf(" O "); // se acertar agua
            }
            else{
                printf(" ~ ");
            }
        }
        printf("%c",186);
        printf("\n");
    }
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n-----------------------------------\n");
    if (ContB == 0){
        printf("PARABENS MARUJO AHRGGHGRH \nDerrotaste todos os barcos inimigos! \nGG");
    }
    else if (ContP == 0){
        printf("Marujo, todos nossos barcos foram destruidos... \nPerdemos esta batalha...");
    }

    return 0;
    //eu ia fazer diferentes tipos de navios, porque eu realmente gostei demais de fazer esse codigo, mas né, o tempo tava meio apertado.
    //na verdade, eu já tenho até uma ideia de como fazer, usando contL + 1 e ContL - 1 para os barcos. Por exemplo, um destroyer teria 3 de largura, então seria contL - 1, contL e contL + 1 que receberiam o valor de 6, que significaria que naquele lugar tem um destroyer e assim por diante.
    //se fosse uma fragata, um barco menor, seria contL - 1 e contL que receberiam o valor de 5, que significaria que no local onde tem o valor 5, tem uma fragata.
    //não sei se esse codigo funcionaria, mas seria interessante testar.

}
