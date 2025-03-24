#include <stdio.h>
#include <stdlib.h>

typedef struct Produtos{
    float preco;
    char nome [20];
    char codigo [20];
    int quantidade;
}Produto;

int main()
{
    Produto produtos [10];
    int quantprod = 0;
    int continuar = 1;

    while ((quantprod < 10) && (continuar == 1)){
        printf("Informe o nome do produto %d \n",quantprod +1);
        scanf("%s", produtos[quantprod].nome);

        printf("Informe o preco do produto %d \n",quantprod +1);
        scanf("%f", &produtos[quantprod].preco);

        printf("Informe o codigo do produto %d \n" ,quantprod +1);
        scanf("%s", produtos[quantprod].codigo);

        printf("Informe a quantidade que voce deseja do produto %d \n",quantprod +1);
        scanf("%d", &produtos[quantprod].quantidade);

        printf("O nome do produto: %s \nO preco do produto: %f \nO codigo do produto: %s \nA quantidade do produto: %d",produtos[quantprod].nome,produtos[quantprod].preco,produtos[quantprod].codigo,produtos[quantprod].quantidade);

        printf("\n\nDeseja colocar outro produto? (0 para nao, 1 para sim) \n");
        scanf("%d", &continuar);

    }
}
