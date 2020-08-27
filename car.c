#include <stdio.h>
int main(){
    float factory_price = 0,  distributor = 0,  taxes = 0; 
    printf("Informe o custo de fabrica de um automovel: ");
    scanf(" %f",&factory_price);
    printf("Informe a percentagem do distribuidor (0 a 100): ");
    scanf(" %f",&distributor);
    printf("Informe a percentagem de impostos (0 a 100): ");
    scanf(" %f",&taxes);
    //total = valid_vote+null_vote+blank_vote;
    printf("\nO custo do veículo ao consumidor eh: R$ %.2f\n",factory_price+factory_price*(distributor/100)+factory_price*(taxes/100));
}