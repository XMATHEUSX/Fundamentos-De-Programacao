#include <stdio.h>
int main(void)
{
    int dia, mes, ano, bissexto;
    printf("Informe um dia :");
    scanf("%d", &dia);
    printf("Informe um mes:");
    scanf("%d", &mes);
    printf("Informe um ano:");
    scanf("%d", &ano);
    //verifica se é um ano bissexto
    bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) ? 1 : 0;
    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31))
    {
        printf("Data valida");
    }
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30))
    {
        printf("Data valida");
    }
    else if ((mes == 2) && (dia >= 1 && dia <= 29) && bissexto == 1)
    {
        printf("Data valida");
    }
    else if ((mes == 2) && (dia >= 1 && dia <= 28) && bissexto == 0)
    {
        printf("Data valida");
    }
    else
    {
        printf("Data invalida");
    }

    return 0;
}
