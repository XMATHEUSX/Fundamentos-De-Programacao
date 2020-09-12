#include <stdio.h>
int main(void)
{
    char numero = 'a';
    int maiuscula = 0, minuscula = 0, n_numero = 0;
    while (numero != 48)
    {
        printf("Insira um caracter:");
        scanf(" %c", &numero);
        if (numero == 48)
        {
            break;
        }
        else if ((int)numero >= 65 && (int)numero <= 90)
        {
            maiuscula++;
        }
        else if ((int)numero >= 97 && (int)numero <= 122)
        {
            minuscula++;
        }
        else
        {
            n_numero++;
        }
    }
    if (maiuscula > 1)
    {
        printf("Foram informados %d Vezes caracteres que sao letras maiusculas.\n", maiuscula);
    }
    else if (maiuscula == 1)
    {
        printf("Foi informado 1 vez  um caractere que eh uma letra maiuscula.\n");
    }
    if (minuscula > 1)
    {
        printf("Foram informados %d Vezes caracteres que sao letras minuscula.\n", minuscula);
    }
    else if (minuscula == 1)
    {
        printf("Foi informado 1 vez  um caractere que eh uma letra minuscula.\n");
    }
    if (n_numero > 1)
    {
        printf("Foram informados %d Vezes caracteres que nao sao letras.\n", n_numero);
    }
    else if (n_numero == 1)
    {
        printf("Foi informado 1 vez  um caractere que  nao eh uma letra.\n");
    }

    return 0;
}