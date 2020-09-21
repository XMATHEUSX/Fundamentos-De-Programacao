#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num = 1, i = 0, lim = 3, primo = 1, j = 2, b;
    char continuar = 'a';
    do
    {
        primo = 1;
        printf("informe a quantidade de numeros primos que serão mostrados:");
        scanf("%d", &num);
        while (num <= 0)
        {
            printf("O numero tem que ser maior que 0:");
            printf("\ninforme a quantidade de numeros primos que serão mostrados:");
            scanf("%d", &num);
        }
        while (i < num)
        {
            if (j % 5 == 0)
            {
                printf("%d", j);
                i++;
            }
            j++;
        }

        printf("\nDeseja digitar outro numero (S/N):");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
        while (continuar != 'S' && continuar != 'N')
        {
            printf("insira S para Continuar ou N para Sair\n");
            printf("Deseja digitar outro numero (S/N):");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);
        }

    } while (continuar == 'S');

    return 0;
}