#include <stdio.h>
int main(){

    int a = 0, b = 0, c = 0;
    printf("Informe o valor de A:");
    scanf("%d", &a);
    printf("Informe o valor de B:"); 
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Antes da troca: A=%d e B=%d\nDepois da troca: A=%d e B=%d\n",b,a,a,b);
}