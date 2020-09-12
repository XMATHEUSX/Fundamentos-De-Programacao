#include <stdio.h>

int main(void)
{

    int i, d = 0, soma = 0, soma2 = 0, soma3 = 0, somatotal = 0;
    for (i = 0; i < 30; i++)
    {
        printf("Insira um numero: ");
        scanf(" %d", &d);
        if (i < 10)
        {
            soma += d;
        }
        else if (i >= 10 && i < 20)
        {
            soma2 += d;
        }
        else if (i >= 20 && i < 30)
        {
            soma3 += d;
        }
        somatotal += d;
    }
    printf("A soma dos dez primeiros numeros: %d\n", soma);
    printf("A soma do decimo primeiro número ate o vigesimo numero: %d\n", soma2);
    printf("A soma do vigesimo primeiro número ate o trigesimo numero: %d\n", soma3);
    printf("A soma de todos os numeros %d\n", somatotal);
    return 0;
}
