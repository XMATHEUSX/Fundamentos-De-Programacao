#include <stdio.h>
int main(void)
{
    int i = 2, x = 1, p = 0, z = 0;
    int a = 0;
    printf("Verificar Se eh primo ?");
    scanf("%d", &a);
    while (i < a)
    {
        if (a % i == 0)
        {
            p++;
        }
        i++;
    }
    if (a < 2)
    {
        printf("nao eh primo");
    }
    else if (p == 0)
    {
        printf("eh primo");
    }
    else
    {
        printf("nao eh primo");
    }

    return 0;
}