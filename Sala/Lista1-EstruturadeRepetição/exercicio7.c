#include <stdio.h>
int main(void)
{
    int maior = 0, menor = 0, d = 0;
    printf("Informe um numero: ");
    scanf("%d", &d);
    maior = d;
    menor = d;
    while (d != 0)
    {
        printf("Informe um numero: ");
        scanf("%d", &d);
        if (d > maior)
        {
            maior = d;
        }
        else if (d < menor && d != 0)
        {
            menor = d;
        }
    }
    printf("maior:%d\tmenor:%d", maior, menor);
    return 0;
}