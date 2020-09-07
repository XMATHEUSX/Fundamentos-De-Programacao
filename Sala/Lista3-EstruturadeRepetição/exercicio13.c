#include <stdio.h>
int main(void)
{
    int qtd = 0, i, oito = 1;
    for (i = 1000; i >= 0; i--)
    {
        if (i % 10 == 0)
        {
            if (oito == 8)
            {
                printf("%-5d", i);
                printf("\n");
                oito = 1;
            }
            else
            {
                /* code */

                printf("%-5d", i);
                printf("\t");
                oito++;
            }
        }
    }
}
