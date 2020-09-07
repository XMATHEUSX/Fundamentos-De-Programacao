#include <stdio.h>
int main(void)
{
    int qtd = 0;
    float soma = 0, i = 0;
    printf("Informe um numero:");
    scanf("%d", &qtd);
    for (i = 1; i <= qtd; i++)
    {
        soma += (1 / i);
    }
    printf("Soma = %.2f ", soma);
}