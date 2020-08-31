#include <stdio.h>
int main(void)
{
    int mes = 0, ano = 0, bissexto = 0;
    float dia = 0;
    printf("Informe uma data (ddmmaaaa) :");
    scanf("%f", &dia);
    ano = (int)dia % 10000;
    dia = (dia - ano) / 10000;
    mes = (int)dia % 100;
    dia = (dia - mes) / 100;
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
