#include <stdio.h>
int main(void)
{
    int dia, mes;
    printf("Informe o dia do seu  nascimento:");
    scanf("%d", &dia);
    printf("Informe o Mes do seu  nascimento:");
    scanf("%d", &mes);
    if ((mes == 12 && dia >= 22 && dia <= 31) || (mes == 1 && dia >= 1 && dia <= 20))
    {
        printf("Seu signo eh Capricornio");
    }
    else if ((mes == 1 && dia >= 21 && dia <= 30) || (mes == 2 && dia >= 1 && dia <= 19))
        printf("Seu signo eh Aquario");
    else if ((mes == 2 && dia >= 20 && dia <= 29) || (mes == 3 && dia >= 1 && dia <= 20))
    {
        printf("Seu signo eh Peixes");
    }
    else if ((mes == 3 && dia >= 21 && dia <= 31) || (mes == 4 && dia >= 1 && dia <= 20))
    {
        printf("Seu signo eh Aries");
    }
    else if ((mes == 4 && dia >= 21 && dia <= 30) || (mes == 5 && dia >= 1 && dia <= 20))
    {
        printf("Seu signo eh Touro");
    }
    else if ((mes == 5 && dia >= 21 && dia <= 31) || (mes == 6 && dia >= 1 && dia <= 20))
    {
        printf("Seu signo eh Gemeos");
    }
    else if ((mes == 6 && dia >= 21 && dia <= 30) || (mes == 7 && dia >= 1 && dia <= 21))
    {
        printf("Seu signo eh Cancer");
    }
    else if ((mes == 7 && dia >= 22 && dia <= 31) || (mes == 8 && dia >= 1 && dia <= 22))
    {
        printf("Seu signo eh Leao");
    }
    else if ((mes == 8 && dia >= 23 && dia <= 31) || (mes == 9 && dia >= 1 && dia <= 22))
    {
        printf("Seu signo eh Virgem");
    }
    else if ((mes == 9 && dia >= 23 && dia <= 30) || (mes == 10 && dia >= 1 && dia <= 22))
    {
        printf("Seu signo eh Libra");
    }
    else if ((mes == 10 && dia >= 23 && dia <= 31) || (mes == 11 && dia >= 1 && dia <= 21))
    {
        printf("Seu signo eh Escorpiao");
    }
    else if ((mes == 11 && dia >= 22 && dia <= 30) || (mes == 12 && dia >= 1 && dia <= 21))
    {
        printf("Seu signo eh Sargitario");
    }
    else
    {
        printf("Data Invalida");
    }

    return 0;
}