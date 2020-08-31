#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char numero = 'a', numero2 = 'a';
    printf("Saldo em conta corrente:");
    scanf("%c", &numero);
    numero = toupper(numero);
    if (numero == 'P')
    {
        printf("Cliente sem risco");
    }
    else if (numero == 'N')
    {
        printf("Saldo em conta corrente:");

        scanf("%c", &numero2);
        scanf("%c", &numero2);

        numero2 = toupper(numero2);
        if (numero2 == 'S')
        {
            printf("Cliente sem risco");
        }
        else if (numero2 == 'N')
        {
            printf("Cliente com risco");
        }
        else
        {
            printf("Caractere invalido");
        }
    }

    return 0;
}
