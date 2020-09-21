#include <stdio.h>
#include <math.h>
int main(void)
{
    int numero = 1, numero_par = 0, tres = 0, positivo = 0;
    float media_tres = 0;
    do
    {
        printf("Informe um numero:");
        scanf("%d", &numero);
        if (numero == 0)
        {
            break;
        }
        if (numero > 0)
        {
            positivo++;
        }
        if (numero < 0 && numero % 2 == 0)
        {
            numero_par++;
        }
        if (numero % 3 == 0)
        {
            tres++;
            media_tres += abs(numero);
        }

    } while (numero != 0);
    printf("numeros positivos: %d", positivo);
    printf("\nnumero negativos que sao pares: %d", numero_par);
    printf("\nA media dos numeros divisiveis por 3 eh: %.1f", (media_tres / tres));
    return 0;
}