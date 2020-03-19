#include <stdio.h>
int main(void) {
    float  a = 0, b = 0, c=0 ;
    printf("Informe o valor da prestação:");
    scanf("%f", &a);
    printf("Informe o valor da taxa de juros cobrada pelo atraso da prestação:"); 
    scanf("%f", &b);
    printf("Valor da parcela se for paga com atraso = R$ %.2f\n",a + (a * (b /100))) ;
    return 0;
}