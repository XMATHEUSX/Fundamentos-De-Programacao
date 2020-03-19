#include <stdio.h>
int main(){
    float before = 0, now= 0; 
    printf("Informe o preco de uma mercadoria no mes passado: R$: ");
    scanf(" %f",&before);
    printf("Informe o preco de uma mercadoria no mes atual: R$ ");
    scanf(" %f",&now);
    //total = valid_vote+null_vote+blank_vote;
    printf("A taxa de inflacao da mercadoria eh: %.1f%\n",(valid_vote*100)/total,(blank_vote*100)/total,(null_vote*100)/total);
}