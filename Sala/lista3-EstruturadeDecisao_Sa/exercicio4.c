#include <stdio.h>
int main(void)
{
    int ano;
    printf("Informe Um ano:");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("ANO BISSEXTO!!!");
    }
    else
    {
        printf("Nao eh ano bissexto");
    }
    return 0;
}
