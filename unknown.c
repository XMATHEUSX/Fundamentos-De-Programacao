#include <stdio.h>
#include <math.h>
int main(void) {
    float  x = 0, y = 0 ;
    printf("Informe o valor de X:");
    scanf("%f", &x);
    printf("Informe o valor de Y:"); 
    scanf("%f", &y);
    printf("((%.2f + %.2f)/%.2f)*%.2f² = %.2f\n", x, y, y, x,((x+y)/y)*(x*x));
    printf("(%.2f+%.2f)/(%.2f-%.2f) = %.2f\n",x,y,x,y,((x+y)/(x-y)));
    printf("(%.2f² + %.2f³)/2 = %.2f\n",x,y,(((x*x)+(y*y*y))/2));
    printf("%.2f³/%.2f² = %.2f\n",x,x,((x*x*x)/(x*x)));
    printf("Resto da divisão de x por y = %.2f\n",(fmod(x,y)));
    printf("Resto da divisão de x por 3 = %.2f\n",(fmod(x,3)));
    printf("Resto da divisão de y por 5 = %.2f\n",(fmod(y,5)));
}