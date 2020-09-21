#include <stdio.h>
#include <math.h>
int main(void)
{
    int num_1 = 1, num_2 = 0, i = 0, temp = 0;
    printf("Informe um numero:");
    scanf("%d", &num_1);
    printf("Informe um numero:");
    scanf("%d", &num_2);
    if (num_1 > num_2)
    {
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }

    for (i = num_1; i <= num_2; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}