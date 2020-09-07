#include <stdio.h>
int main(void)
{
    int a = 1, b = 1, x = 0, y = 0, onze = 0;
    float media = 0;
    while (a == b && a > 0 && b > 0)
    {
        printf("Informe um valor para o limite inferior de um intervalo: ");
        scanf("%d", &a);
        printf("Informe um valor para o limite superior de um intervalo: ");
        scanf("%d", &b);
    }
    if (a < b)
    {
        for (a; a <= b; a++)
        {
            printf("%d\t", a);
            if (a % 11 == 0 && a % 7 == 0)
            {

                media += a;
                onze++;
            }
        }
    }
    else if (a > b)
    {
        for (a; a >= b; a--)
        {
            printf("%d\t", a);
            if (a % 11 == 0 && a % 7 == 0)
            {
                media += a;
                onze++;
            }
        }
    }
    printf("\nMedia dos numeros divisiveis por 7 e por 11 do intervalo : %.2f", (media / onze));
}