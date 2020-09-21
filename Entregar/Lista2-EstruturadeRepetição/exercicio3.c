#include <stdio.h>
#include <math.h>
int main(void)
{
    char caracter = 'a';
    int caracteres = 0, vogais_min = 0;
    do
    {
        printf("Informe um caracter:");
        scanf(" %c", &caracter);
        if (caracter == '0')
        {
            break;
        }
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        {
            vogais_min++;
        }
        caracteres++;

    } while (caracter != '0');
    printf("O total de vogais minusculas eh: %d", vogais_min);
    printf("\n O total de caracteres digitados eh: %d", caracteres);
    return 0;
}