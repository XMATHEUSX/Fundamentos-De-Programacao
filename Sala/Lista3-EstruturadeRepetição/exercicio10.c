#include <stdio.h>
int main(void)
{
    int a = 0, i = 0, x = 1, y = 1, z = 0;
    float par_5 = 0;
    printf("Quantos termos mostrar ?");
    scanf("%d", &a);
    while (i <= a)
    {
        printf("%d\t", x);
        x = x + y;
        i++;
        if (i <= a)
        {
            printf("%d\t", y);
            y = x + y;
            i++;
        }
    }

    //printf("\nQuantidade de numeros impares não divisiveis por 3 no intervalo : %d\n", impar_3);
    //printf("Media dos numeros pares divisiveis por 5 do intervalo : %.2f", 10(par_5 / x));
}