#include <stdio.h>
int main(void)
{
    int i = 0;
    for (i = 9; i > 0; i = i--)
    {
        printf("%d\t", i);
    }
    return 0;
}