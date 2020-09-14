#include <stdio.h>

int main(void)
{
    int numero = 0, n = 0, i = 0, linha = 0;
    printf("informe um numero maior o igual a zero");
    scanf("%d", &numero);
    while (numero < 0)
    {
        printf("numero invalido");
        printf("informe um numero maior o igual a zero");
        scanf("%d", &numero);
    }
    printf("quantidade de numeros a serem mostradas por linhas");
    scanf("%d", &n);
    for (i = 0; i < (numero * 2); i = i + 2)
    {
        printf("%d\t", i);
        linha++;
        if (linha == n)
        {
            linha = 0;
            printf("\n");
        }
    }
    return 0;
}
