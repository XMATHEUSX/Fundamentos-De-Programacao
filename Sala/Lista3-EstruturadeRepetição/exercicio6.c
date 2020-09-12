//perguntar para professora
#include <stdio.h>
int main(void)
{
    int a = 0, x = 0;
    float media;

    for (a = 2; a < 100; a = a + 2)
    {
        printf("%d\t", a);
        media += a;
        x++;
    }
    media = media / x;
    printf("\nMedia %.2f", media);
    return 0;
}