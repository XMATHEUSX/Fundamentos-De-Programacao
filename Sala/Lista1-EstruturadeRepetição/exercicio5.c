#include <stdio.h>
int main(void)
{
    int i = 0, d = 0, soma = 0, produto = 0;
    float media;
    do
    {
        printf("insira um numero maior que 2:");
        scanf("%d", &d);
        if (d > 9)
        {
            produto = 1;
        }
    } while (d <= 2);
    printf("Todos os numero pares entre 2 e %d:", d);
    for (i = 2; i <= d; i = i + 2)
    {
        printf("%d\t", i);
    }
    for (i = 2; i <= d; i = i + 2)
    {
        soma += i;
    }
    printf("\nSoma dos numero pares entre 2 e %d: %d\n", d, soma);
    for (i = 3; i <= d; i = i + 2)
    {
        if (i % 9 == 0)
        {
            produto *= i;
        }
    }
    printf("produto dos numero impares entre 2 e %d que são divisiveis por 9: %d\n", d, produto);
    for (i = 2; i <= d; i++)
    {
        media += i;
    }
    media = media / d;
    printf("media de todos os numero do intervalo entre 2 e %d: %.2f ", d, media);
}