#include <stdio.h>
int main(){
    int year = 0 ,month = 0,day = 0 ; 
    //printf("Informe um valor em segundos: ");
    scanf("%d",&day);
    year = day/365;
    day = day%365;
    month = day/30;
    day = day%30;
    month = month%12;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
}