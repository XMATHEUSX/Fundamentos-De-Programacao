#include <stdio.h>
int main(){
    float  test1 = 0, test2 = 0, test3 = 0, average_test = 0, activity1 = 0, activity2 = 0, average_activity = 0, average_final = 0 ;
    printf("Coloque as notas das 3 provas entre espaços.Ex:1 2 3\n");
    scanf("%f %f %f",&test1 ,&test2 ,&test3);
    average_test = (2*test1+3*test2+3*test3)/8;
    printf("Coloque as notas dos 2 trabalhos entre espaços.\n");
    scanf("%f %f",&activity1 ,&activity2);
    average_activity = (activity1+activity2)/2;
    average_final = (8*average_test+2*average_activity)/10;
    printf("Média Das Provas:%.2f\nMédia Dos Trabalhos:%.2f\nMédia Final %.2f\n",average_test, average_activity, average_final);
}