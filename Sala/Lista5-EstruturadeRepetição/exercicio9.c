#include <stdio.h>

int main(void)
{
    int numero = 0, i = 0, cinco = 5;
    float media = 0;
    printf("informe o valor da base:");
    scanf("%d", &numero);
    if (numero < 0)
    {
        numero = numero * -1;
    }
    for (i = 0; i < numero; i++)
    {
        media += cinco;
        printf("%d\n", cinco);
        cinco += 10;
    }

    printf("a media dos numeros multiplos de 5 é %.2f", media / numero);
    return 0;
}
