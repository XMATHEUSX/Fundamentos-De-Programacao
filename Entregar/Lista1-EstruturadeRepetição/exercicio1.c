#include <stdio.h>
int main(void)
{
    int i = 0, qtd = 0;
    float media;
    for (i = 21; i < 100; i = i + 2)
    {
        printf("%d\t", i);
        if (i % 5 == 0)
        {
            media += i;
            qtd++;
        }
    }
    printf("media dos valores desse intervalo que sao divisiveis por 5: %.2f", (media / qtd));
    return 0;
}