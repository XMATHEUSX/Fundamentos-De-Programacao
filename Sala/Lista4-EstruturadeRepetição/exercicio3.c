#include <stdio.h>
int main(void)
{
    int numero = 1, cinco = 0, pares = 0;
    while (numero > 0)
    {
        printf("insira um numero:");
        scanf("%d",&numero);
        if (numero <= 0)
        {
            break;
        }
        else if (numero % 2 == 0)
        {
            pares++;
        }
        else if (numero % 5 == 0)
        {
            cinco++;
        }
    }
    printf("Foram inseridos %d numeros multiplos de 5\n", cinco);
    printf("Foram inseridos %d numeros pares", pares);

    return 0;
}