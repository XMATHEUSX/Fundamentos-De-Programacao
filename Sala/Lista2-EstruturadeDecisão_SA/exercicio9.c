#include <stdio.h>

int main(void)
{
    int numero = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    printf("Insira o um numero:");
    scanf("%d", &numero);
    num1 = numero % 10;
    numero = numero - num1;
    num2 = (numero % 100) / 10;
    numero = numero - num2;
    num3 = (numero % 1000) / 100;
    numero = numero - num3;
    num4 = (numero % 10000) / 1000;
    numero = numero - num4;
    if (num1 == num4 && num2 == num3)
    {
        printf("O numero inserido e um palindromo");
    }
    else
    {
        printf("O numero inserido nao e um palindromo");
    }
    
    return 0;
    }