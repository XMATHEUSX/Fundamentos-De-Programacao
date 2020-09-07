#include <stdio.h>
int main(void)
{
    int qtd = 0;
    float i;
    printf("Informe a quantidade de pessoas:");
    scanf("%d", &qtd);
    printf("VALOR DO INGRESSO\tVALOR TOTAL RECEBIDO\n");
    for (i = 15; i <= 20; i = i + 0.5)
    {
        printf("R$ %-20.2f\tR$ %.2f\n", i, (qtd * i));
    }
}