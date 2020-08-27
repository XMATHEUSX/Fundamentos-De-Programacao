#include <stdio.h>
int main(){
    float leght = 0, width = 0,height = 0 ; 
    //printf("Informe um valor em segundos: ");
    printf("Coloque entre espaços o comprimento, a largura e a altura :");
    scanf(" %f %f %f",&leght,&width,&height);
    printf("Volume:%.2f cm³\n",leght*width*height);
}