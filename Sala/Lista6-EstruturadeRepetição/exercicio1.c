#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num = 1, linha = 0, i = 0, pula_linha = 0;
    char continuar = 'a';
    float media = 0, soma = 0;
    do
    {
        printf("informe o numero de impares que serão mostrados:");
        scanf("%d", &num);
        printf("informe Um numero maior que 0:");
        scanf("%d", &linha);
        while (linha <= 0)
        {
            printf("O numero tem que ser maior que 0:");
            printf("\ninforme Um numero maior que 0:");
            scanf("%d", &linha);
        }
        for (i = 1; i < (num * 2); i = i + 2)
        {
            printf("%d\t", i);
            pula_linha++;
            soma += i;
            if (pula_linha == linha)
            {
                printf("\n");
                pula_linha = 0;
            }
        }
        media = soma / num;
        printf("\nMedia dos numeros impares apresentados:%.2f", (media));

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