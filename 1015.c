#include <stdio.h>
#include <math.h>
int main(void) {
    float  a = 0, b = 0, c=0, d=0 ;
    printf("Informe o valor de X1 e Y1 separados por espaço:");
    scanf("%f %f", &a , &c);
    printf("Informe o valor de X2 e Y2 separados por espaço:");
    scanf("%f %f", &b , &d);
    printf("A distância entre os  pontos eh =  %.4f\n", sqrt(pow((b-a),2)+pow((d-c),2)));
    return 0;
}