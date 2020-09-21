#include <stdio.h>
#include <math.h>
int main(void)
{
    int soma = 0, i = 0, p = 0;
    float media = 0;
    for (i = 499; i > 0; i--)
    {
        if (i % 2 == 1 && i % 7 == 0)
        {
            printf("%d\t", i);
        }
        if (i % 2 == 0 && i % 3 == 0)
        {
            soma += i;
            p++;
        }
    }
    media = soma / p;
    printf("\nA media dos numeros pares e divisiveis por 3 eh: %.2f", media);
    return 0;
}