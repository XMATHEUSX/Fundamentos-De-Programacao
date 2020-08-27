#include <stdio.h>
int main(){
    float dolar = 0, real = 0; 
    //printf("Informe um valor em segundos: ");
    printf("Informe o valor atual do dolar: R$ ");
    scanf(" %f",&dolar);
    printf("Informe um valor em reais: R$ ");
    scanf(" %f",&real);
    printf("R$ %.f equivalem a U$%.2f\n",real,real/dolar);
}