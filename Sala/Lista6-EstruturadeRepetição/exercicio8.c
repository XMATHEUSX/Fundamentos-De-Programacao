#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num = 1, cont = 0, cont2;
    char continuar = 'a';
    do
    {
        printf("informe Um numero:");
        scanf("%d", &num);
        for (cont = 1; cont <= num; cont++)
        {
            for (cont2 = 1; cont2 <= cont; cont2++)
            {
                printf("%d\t", cont2);
            }
            printf("\n");
        }
        printf("Deseja digitar outro numero (S/N):");
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
    //printf("O numero de menores de 18 anos que são autonomos eh: %d\n", cont);
    //printf("A idade media dos maiores de 18 anos que sao funcionario eh: %.2f", media);

    return 0;
}