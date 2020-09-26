#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 1, b = 2, i = 0, qtd = 0, temp = 0;
    char continuar = 'a';
    do
    {
        qtd = 0;
        do
        {
            if (a < 0)
            {
                printf("Numero invalido! o numero deve ser positivo\n");
            }
            printf("Digite um numero ");
            scanf("%d", &a);
        } while (a < 0);
        do
        {
            if (b < 0)
            {
                printf("Numero invalido! o numero deve ser positivo\n");
            }
            printf("Digite um numero ");
            scanf("%d", &b);
        } while (b < 0);
        while (a != 0)
        {
            temp = a % 10;
            a = a - temp;
            a = a / 10;
            if (temp == b)
            {
                qtd++;
            }
        }
        printf("O numero tem %d Digito(s) igual a %d\n", qtd, b);

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