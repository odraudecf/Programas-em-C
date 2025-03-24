int main()
{
    float notas, media, soma = 0;
    int contagem = 0;

    while (notas >= 0) {
        printf("Digite a nota %d:\n", contagem + 1);
        scanf("%f", &notas);

        if (notas >=0){
            soma = soma + notas;
            contagem++;
        }
    }
    media = soma / contagem;
    printf("A media das notas eh: %.2f \n", media);
    printf("A soma das notas eh: %.2f", soma);

}
