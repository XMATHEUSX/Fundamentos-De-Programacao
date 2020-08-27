#include <stdio.h>
int main(void) {
    int  a = 0, b = 0;
    float c = 0 ;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor:");
    scanf("%d", &b );
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d / %d = %.2f\n",a,b,a/(float)b);
    printf("%d %% %d = %d\n",a,b,a%b);

    return 0;
}