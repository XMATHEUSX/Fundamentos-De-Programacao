#include <stdio.h>
int main(void)
{
    int i = 0, qtd = 0;
    float media;
    for (i = 20; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
        if (i % 5 == 0)
        {
            media += i;
            qtd++;
        }
    }
    printf("%.2f", (media / qtd));
}