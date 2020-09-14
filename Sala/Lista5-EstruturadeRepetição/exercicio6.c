#include <stdio.h>

int main(void)
{
    int numero = 0, unidade = 0, dezena = 0, centena = 0, milhar = 0, und_milhar = 0;
    //float resultado = 1;

    while (numero >= 0)
    {
        printf("informe o valor da base:");
        scanf(" %d", &numero);
        if (numero < 10)
        {
            printf("O numero tem 1 digito\n");
        }
        else if (numero < 100)
        {
            printf("O numero tem 2 digitos\n");
        }
        else if (numero < 1000)
        {
            printf("O numero tem 3 digitos\n");
        }
        else if (numero < 10000)
        {
            printf("O numero tem 4 digitos\n");
        }
        else if (numero < 100000)
        {
            printf("O numero tem 5 digitos\n");
        }
        else if (numero < 1000000)
        {
            printf("O numero tem 6 digitos\n");
        }
        else if (numero < 10000000)
        {
            printf("O numero tem 7 digitos\n");
        }
        else if (numero < 100000000)
        {
            printf("O numero tem 8 digitos\n");
        }
        else if (numero < 1000000000)
        {
            printf("O numero tem 8 digitos\n");
        }
        else if (numero < 0)
        {
            break;
        }
    }
    return 0;
}