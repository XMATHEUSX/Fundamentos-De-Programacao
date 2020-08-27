#include <stdio.h>
int main(){
    int year = 0 ,month = 0,day = 0 ; 
    //printf("Informe um valor em segundos: ");
    printf("Coloque entre espaços a quantidade de anos , meses e dias que já se passaram desde que você nasceu:");
    scanf(" %d %d %d",&year,&month,&day);
    //day += year*365;
    //day += month*30;
    printf("%d ano(s) %d mes(es) %d dia(s) correspondem a %d dia(s)\n",year,month,day,day+(year*365)+(month*30));
}