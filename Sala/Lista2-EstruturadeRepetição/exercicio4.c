#include <stdio.h>

int main(void)
{
    int d = 0, i = 0;
    float media;
    for (i = 499; i > 0; i--)
    {
        if (i % 4 == 0 || i % 10 == 0)
        {
            printf("%d\t", i);
            media += i;
            d++;
        }
    }
    printf("\nmedia dos multiplos: %.2f", media / d);
    return 0;
}
