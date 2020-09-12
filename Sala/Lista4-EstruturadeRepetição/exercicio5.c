#include <stdio.h>
int main(void)
{
    char numero = 'a';
    int a = 0;
    while (numero != 48)
    {
        printf("insira um numero:");
        scanf(" %c", &numero);
        if (numero == 48)
        {
            break;
        }
        else if ((int)numero == 65)
        {
            a++;
        }
    }
    if (a > 1)
    {
        printf("Foram informados %d Vezes o caracter 'A'.", a);
    }
    else if (a == 1)
    {
        printf("Foi informado 1 Vez o caracter 'A'.");
    }
    else
    {
        printf("Nao Foi informado nenhuma vez o caracter 'A'.");
    }

    return 0;
}