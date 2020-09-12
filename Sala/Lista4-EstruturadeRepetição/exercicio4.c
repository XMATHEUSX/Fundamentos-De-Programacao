#include <stdio.h>
int main(void)
{
    int numero = 1, impares = 0, negativo = 0;
    float negativo_media = 0;
    while (numero != 0)
    {
        printf("insira um numero:");
        scanf("%d", &numero);
        if (numero == 0)
        {
            break;
        }
        else if (numero % 2 == 1)
        {
            impares++;
        }
        else if (numero < 0)
        {
            negativo_media += numero;
            negativo++;
        }
    }
    printf("A media dos numeros negativos eh %.2f\n", (negativo_media / negativo));
    printf("Foram informados %d numeros positivos que sao impares.", impares);

    return 0;
}