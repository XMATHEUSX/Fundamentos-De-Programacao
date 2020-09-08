#include <stdio.h>
int main(void)
{
    int valor, maior, j;
    //printf("insira um valor:");
    //scanf("%d", &valor);
    //maior = valor;
    for (j = 0; j < 5; j++)
    {
        printf("insira um valor");
        scanf("%d", &valor);
        if (j == 0)
        {
            maior = valor;
        }
        if (valor > maior)
        {
            maior = valor;
        }
    }
    printf("%d", maior);
    return 0;
}
// o algoritmo imprime o maior valor digitado
//podemos colocar um if(j==0)