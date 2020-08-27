#include <stdio.h>
#include <math.h>
int main(void) {
    unsigned int  a = 0, b = 0, c = 0,r = 0,s = 0 ;
    float d = 0;
    printf("Informe o valor de A:");
    scanf("%d", &a);
    printf("Informe o valor de B:"); 
    scanf("%d", &b);
    printf("Informe o valor de C:"); 
    scanf("%d", &c);
    r = pow((a+b),2);
    s = pow((b+c),2);
    d = (r+s)/2;
    printf("D = %.2f\n",d) ;

}