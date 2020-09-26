#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 123123123, b = 0, c = 2, d = 0;
    while (a != 0)
    {
        b = a % 10;
        a = a - b;
        a = a / 10;
        if (b == c)
        {
            d++;
        }
    }
    printf("%d", d);
    return 0;
}