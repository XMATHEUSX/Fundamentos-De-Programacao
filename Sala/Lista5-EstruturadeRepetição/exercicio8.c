#include <stdio.h>

int main(void)
{
    int numero = 0, i = 0, soma = 0;
    //float resultado = 1;
    printf("informe o valor da base:");
    scanf("%d", &numero);
    printf("Divisores:\n");
    for (i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("---------------\n");
    printf("%d\n", soma);
    if (soma > numero)
    {
        printf("%d eh abundante,pois a soma de seus divisores eh maior que %d", numero, numero);
    }
    else
    {
        printf("%d  nao eh abundante,pois a soma de seus divisores eh menor ou igual que %d", numero, numero);
    }

    return 0;
}
