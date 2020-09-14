#include <stdio.h>
int main(void)
{
    int num, i;
    do
    {
        printf("Informe um numero entre 1 e 50:");
        scanf("%d", &num);
        if (num < 1 || num > 50)
        {
            printf("Valor informado fora da faixa.\n");
        }
    } while (num < 1 || num > 50);
    for (i = num; i <= 50; i = i + 2)
    {
        printf("\n%d\t", i);
    }
    return 0;
}
//o programa le um numero entre 1 e 50 e se for informado um numero par ele mostra todos od numero pares ate 50 a partir do numero inserido.se for inserido um impar ele mostrara todo os numeros impares do numero impar informado ate 49 