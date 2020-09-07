#include <stdio.h>
int main(void)
{
    int qtd = 0, laco = 0, quebralinha = 1;
    printf("Quantos numero pares quer mostrar? ");
    scanf("%d", &qtd);
    do
    {
        if (qtd <= 0)
        {
            printf("O valor deve ser maior que 0. informe novamente. ");
            printf("\nQuantos numero pares quer mostrar? ");
            scanf("%d", &qtd);
        }
        if (qtd > 0 && quebralinha == 5)
        {
            printf("%d\n", laco);
            laco += 2;
            quebralinha = 1;
        }
        else if (qtd > 0)
        {
            printf("%d\t", laco);
            laco += 2;
            quebralinha++;
        }

    } while (qtd <= 0 || laco < qtd * 2);

    return 0;
}