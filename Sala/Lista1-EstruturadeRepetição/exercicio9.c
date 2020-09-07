#include <stdio.h>
int main(void)
{
    int qtd = 0, laco = 1;
    printf("Quantos numero impares quer mostrar? ");
    scanf("%d", &qtd);
    do
    {
        if (qtd <= 0)
        {
            printf("O valor deve ser maior que 0. informe novamente. ");
            printf("\nQuantos numero impares quer mostrar? ");
            scanf("%d", &qtd);
        }
        if (qtd > 0)
        {
            printf("%d\n", laco * 2 - 1);
            laco++;
        }

    } while (qtd <= 0 || laco <= qtd);

    return 0;
}