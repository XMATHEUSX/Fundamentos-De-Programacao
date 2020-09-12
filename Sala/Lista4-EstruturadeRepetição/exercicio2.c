#include <stdio.h>
int main(void)
{
    float montante = 1000;
    int meses = 0;
    while (montante < 1200)
    {
        montante += montante * 0.05;
        meses++;
    }
    printf("Valor final = R$:%.2f\n", montante);
    printf("Serao necessarios %d meses para que o capita investido B ultrapsse R$1.200,00", meses);

    return 0;
}