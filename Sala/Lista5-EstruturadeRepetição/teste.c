#include <stdio.h>

int main(void)
{
    int base = 0, aux = 0, invertido = 0;
    printf("informe o valor da base:");
    scanf("%d", &base);
    base = base / 10;
    /* Construção do número invertido */
    aux = base;
    while (aux > 0)
    {
        invertido = (invertido * 10) + (aux % 10);
        aux = aux / 10;
    }
    printf("%d", invertido);
    return 0;
}
