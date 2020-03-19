#include <stdio.h>
int main(){
    int hour = 0 ,min = 0,seg = 0 ; 
    printf("Informe um valor em segundos: ");
    scanf("%d",&seg);
    min = seg/60;
    hour = min/60;
    seg = seg%60;
    min = min%60;
    printf("Esse valor corresponde a %d hora(s), %d minuto(s) e %d segundo(s)\n",hour,min,seg);
}