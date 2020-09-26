#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 1, b = 2, i = 0, linha = 0, j = 0, primo = 0, lim = 0, linha_num = 0;
    char continuar = 'a';
    do
    {
        linha_num = 0;
        do
        {
            if (a <= 1 || b <= 1)
            {
                printf("Os limites devem ser maiores que 1\n");
            }
            else if (a <= 0 || b <= 0)
            {
                printf("Os limites devem ser maiores que 1\n");
            }
            else if (a > b)
            {
                printf("Os limite inferior deve ser menor que o limite superior\n");
            }
            if (linha <= 0)
            {
                printf("o numero por linhas deve ser maior que 0\n");
            }
            printf("Informe um valor para o limite Inferior de um intervalo: ");
            scanf("%d", &a);
            printf("Informe um valor para o limite Superior de um intervalo: ");
            scanf("%d", &b);
            printf("Informe Quantos numeros deseja imprimir por linha: ");
            scanf("%d", &linha);
        } while (a <= 1 || b <= 1 || a > b || linha <= 0);
        for (j = a; j < b; j++)
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
                if (linha == linha_num)
                {
                    printf("\n");
                    linha_num = 0;
                }
                printf("%d\t", j);
                linha_num++;
            }
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