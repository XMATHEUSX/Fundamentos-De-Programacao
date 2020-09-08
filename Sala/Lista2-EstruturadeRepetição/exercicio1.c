#include <stdio.h>

int main(void)
{
    int d = 0, i = 0;
    printf("informe um numero: ");
    scanf("%d", &d);
    for (i = 0; i <= 10; i++)
    {
        printf("%d * %2d = %2d\n", d, i, i * d);
    }
    return 0;
}