#include <stdio.h>

int main(void)
{
    int d = 0, i = 0;
    long long int fat = 1;
    printf("informe um numero: ");
    scanf("%d", &d);
    for (i = 1; i <= d; i++)
    {
        fat *= i;
    }
    printf("%lld", fat);
    return 0;
}