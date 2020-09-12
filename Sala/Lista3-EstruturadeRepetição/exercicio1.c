#include <stdio.h>
int main(void)
{
    int i = 0;
    for (i = 2; i < 1000; i++)
    {
        if (i % 11 == 0 && i % 2 == 1)
            printf("%d\t", i);
    }
    return 0;
}