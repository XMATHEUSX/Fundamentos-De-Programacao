#include <stdio.h>
int main(){
    float km = 0, price_fuel = 0, used_fuel = 0; 
    printf("Informe os quilometros percorridos: ");
    scanf(" %f",&km);
    printf("Informe o combustivel consumido (em litros): ");
    scanf(" %f",&used_fuel);
     printf("Informe o valor do litro do combustivel: ");
    scanf(" %f",&price_fuel);
    printf("O automovel fez %.2f km por litro de combustivel.\nO gasto em reais por km foi de R$ %.2f.\n",(km/used_fuel),(used_fuel*price_fuel)/km);
}