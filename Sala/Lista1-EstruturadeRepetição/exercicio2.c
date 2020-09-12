#include <stdio.h>
int main(void)
{
    int i = 0;
    for (i = 10; i < 50; i = i + 5)
    {
        printf("%d\t", i);
    }
    return 0;
}