//perguntar para professora
#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, x = 0, y = 0;
    float media;

    for (a = 200; a > 0; a--)
    {
        if (a % 2 == 1 && a % 5 != 0)
            printf("%d\t", a);
        if (a % 3 == 0 && a % 5 == 0)
        {
            media += a;
            x++;
        }
    }
    media = media / x;
    printf("\nmedia %.2f", media);
}