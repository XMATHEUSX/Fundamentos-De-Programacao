#include <stdio.h>
int main(void)
{
    int a = 0, impar_3 = 0, x = 0;
    float par_5 = 0;
    for (a = 100; a <= 200; a++)
    {
        printf("%d\t", a);

        if (a % 2 == 1 && a % 3 != 0)
        {
            impar_3++;
        }
        if (a % 2 == 0 && a % 5 == 0)
        {
            par_5 += a;
            x++;
        }
    }
    printf("\nQuantidade de numeros impares não divisiveis por 3 no intervalo : %d\n", impar_3);
    printf("Media dos numeros pares divisiveis por 5 do intervalo : %.2f", (par_5 / x));
}