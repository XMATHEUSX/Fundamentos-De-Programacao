#include <stdio.h>
int main(void)
{
    float altura_arvore_a = 1.50, altura_arvore_b = 1.10;
    int anos = 0;
    while (altura_arvore_a > altura_arvore_b)
    {
        altura_arvore_a += 0.02;
        altura_arvore_b += 0.03;
        anos++;
    }
    printf("Altura final da arvore A = %.2f\n", altura_arvore_a);
    printf("Altura final da arvore B = %.2f\n", altura_arvore_b);
    printf("Serao necessarios %d anos para que a arvore B seja maior que a arvore A", anos);

    return 0;
}