#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 1, b = 2, i = 0, cont = 0;
    float media = 0, soma = 0;
    char continuar = 'a';
    do
    {
        soma = 0;
        cont = 0;
        do
        {
            if (a == b)
            {
                printf("Os limites não podem ser iguais\n");
            }
            else if (a <= 0 || b <= 0)
            {
                printf("Os limites devem ser maiores que 0\n");
            }
            else if (a > b)
            {
                printf("Os limite inferior deve ser menor que o limite superior\n");
            }
            printf("Informe um valor para o limite inferior de um intervalo: ");
            scanf("%d", &a);
            printf("Informe um valor para o limite Superior de um intervalo: ");
            scanf("%d", &b);
        } while (a == b || (a <= 0) || (b <= 0) || (a > b));
        for (i = a; i < b; i++)
        {
            if (i % 3 == 0)
            {
                printf("%d\t", i);
                soma += i;
                cont++;
            }
        }
        media = soma / cont;
        printf("\nA media dos numeros multilplos de 3 eh: %.2f", media);
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