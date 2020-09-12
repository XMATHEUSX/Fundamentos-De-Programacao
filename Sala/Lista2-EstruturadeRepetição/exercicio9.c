#include <stdio.h>

int main(void)
{
    int d = 0, i = 0, num = 1, num2 = 0, impar = 0, dez = 0, num3 = 0, trinta = 0, ntrinta = 0;
    float media;
    while (num >= 0)
    {
        printf("insira um numero: ");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }

        if (num < 10 || num > 100)
        {
            num2++;
        }
        if (num % 2 == 1)
        {
            impar++;
        }
        if (num % 10 == 0)
        {
            dez++;
        }
        if (num > 10 && num < 100)
        {
            num3++;
        }
        if (num == 30)
        {
            trinta++;
        }
        if (num != 30 && num != 20 && num != 10)
        {
            ntrinta++;
        }
    }

    printf("\nQuantidade de numeros menores que 10 ou maiores que 100: %d", num2);
    printf("\nQuantidade de numeros impares: %d", impar);
    printf("\nQuantidade de numeros divisiveis por 10: %d", dez);
    printf("\nQuantidade de numeros entre 10 e 100: %d", num3);
    printf("\nQuantidade de vezes que eh informado o numero 30: %d", trinta);
    printf("\nQuantidade de vezes que eh informado um numero diferente de 10, de 20 e de 30: %d", ntrinta);
    return 0;
}
