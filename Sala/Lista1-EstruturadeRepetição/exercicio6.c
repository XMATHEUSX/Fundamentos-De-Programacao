#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0, i = 0, t = 0;
    float media = 0;
    printf("Insira o valor incial do intervalo:");
    scanf("%d", &a);
    printf("Insira o valor final do intervalo:");
    scanf("%d", &b);
    printf("Incremento:");
    scanf("%d", &c);
    if (a > b)
        for (i = b; i <= a; i = i + c)
        {
            if ((i % 2 == 1) && (i % 35 == 0))
            {
                printf("%d\t impar e divisivel por 35\n", i);
                t++;
                media += i;
            }
            printf("%d\n", i);
        }
    else if (a < b)
        for (i = a; i <= b; i = i + c)
        {
            if ((i % 2 == 1) && (i % 35 == 0))
            {
                printf("%d\t impar e divisivel por 35\n", i);
                t++;
                media += i;
            }
            printf("%d\n", i);
        }
    printf("A media dos numero impares que são divisiveis por 35 eh : %.2f", media);
    return 0;
}