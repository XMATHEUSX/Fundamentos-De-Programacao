#include <stdio.h>
int main(void)
{
    int num = 100, num2 = 0;
    float media = 0;
    while (num >= 0)
    {
        printf("%d\t", num);
        media += num;
        num--;
        num2++;
    }
    printf("\n Media:%.2f", (media / num2));

    return 0;
}