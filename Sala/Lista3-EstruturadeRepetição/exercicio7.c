#include <stdio.h>
int main(void)
{
    int a = 0, par = 0, impar = 0, sete = 0;

    for (a = 0; a <= 10; a = a++)
    {
        printf("Insira umm numero:", a);
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            par++;
        }
        if (a % 2 == 1)
        {
            impar++;
        }
        if (a % 7 == 0)
        {
            sete++;
        }
    }
    printf("Quantidade de numeros pares inseridos: %d\n", par);
    printf("Quantidade de numeros impares inseridos: %d\n", impar);
    printf("Quantidade de numeros divisiveis por 7 inseridos:%d", sete);
}