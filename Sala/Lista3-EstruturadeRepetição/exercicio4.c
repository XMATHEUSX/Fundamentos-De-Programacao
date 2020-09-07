#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, x = 0, y = 0;
    while (a == b)
    {
        printf("Informe um valor para o limite inferior de um intervalo: ");
        scanf("%d", &a);
        printf("Informe um valor para o limite Superior de um intervalo: ");
        scanf("%d", &b);
    }
    printf("Informe um valor para x: ");
    scanf("%d", &x);
    printf("Informe um valor para y: ");
    scanf("%d", &y);
    if (a < b)
    {
        for (a; a <= b; a++)
        {
            if (a % x == 0 && a % y != 0)
                printf("%d\t", a);
        }
    }
    else if (a > b)
    {
        for (a; a >= b; a--)
        {
            if (a % x == 0 && a % y != 0)
                printf("%d\t", a);
        }
    }
}