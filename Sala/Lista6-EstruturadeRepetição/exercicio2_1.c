#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num = 1, i = 0, lim = 3, primo = 0, j = 2, b;
    char continuar = 'a';
    do
    {
        i = 0;
        j = 2;
        primo = 0;
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
            primo = 0;
            lim = 2;
            while (lim <= j)
            {
                if (j % lim == 0)
                {
                    primo++;
                }
                lim++;
            }
            if (primo < 2)
            {
                printf("%d\t", j);
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