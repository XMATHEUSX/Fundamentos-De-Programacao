#include <stdio.h>
#include <math.h>

int main(void)
{
    int d = 1, i = 0, tres = 0;
    printf("Os números divisíveis por 3\n");
    for (i = 0; i <= 100; i++)
    {

        if (i % 3 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\nO quadrado dos números divisíveis por 3\n");
    for (i = 0; i <= 100; i++)
    {

        if (i % 3 == 0)
        {
            printf("%d\t", i * i);
        }
    }
    printf("\nOs números divisíveis por 5 ou 7\n");
    for (i = 0; i <= 100; i++)
    {

        if (i % 5 == 0 || i % 7 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\nO quadrado dos números divisíveis por 3\n");
    for (i = 0; i <= 100; i++)
    {

        if (i % 5 == 0 || i % 7 == 0)
        {
            printf("%.2f\t", sqrt(i));
        }
    }
    return 0;
}