#include <stdio.h>

int main(void)
{
    int ano = 1;
    float valor_do_bem = 0, taxa_despre = 0, valor_depre = 0;
    do
    {
        if (a < 0)
        {
            printf("Numero invalido! o numero deve ser positivo\n");
        }
        printf("Digite um numero ");
        scanf("%d", &a);
    } while (a < 0);
    do
    {
        if (b < 0)
        {
            printf("Numero invalido! o numero deve ser positivo\n");
        }
        printf("Digite um numero ");
        scanf("%d", &b);
    } while (b < 0);
    do
    {
        if (a < 0)
        {
            printf("Numero invalido! o numero deve ser positivo\n");
        }
        printf("Digite um numero ");
        scanf("%d", &a);
    } while (a < 0);
    while (a != 0)
    {
        temp = a % 10;
        a = a - temp;
        a = a / 10;
        if (temp == b)
        {
            qtd++;
        }
    }
    printf("O numero tem %d Digito(s) igual a %d\n", qtd, b);
    return 0;
}