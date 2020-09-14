#include <stdio.h>

int main(void)
{
    int base = 0, expoente = 0, i = 0;
    float resultado = 1;
    printf("informe o valor da base:");
    scanf("%d", &base);

    printf("informe o valor do exponte:");
    scanf("%d", &expoente);
    if (expoente == 0)
    {
        printf("= 1");
    }
    else
    {
    for (i = 0; i < expoente - 1; i++)
    {
        printf("%d * ", base);
        resultado *= base;
    }
    printf("%d = %.0f", base, resultado);
    }
    return 0;
}
