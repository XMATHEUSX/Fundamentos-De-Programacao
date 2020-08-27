#include <stdio.h>
int main(){
    float gross_salary = 0,  inss = 0,  ir = 0; 
    printf("Informe o valor do salario bruto: R$ ");
    scanf(" %f",&gross_salary);
    printf("Informe o percentual de INSS: ");
    scanf(" %f",&inss);
    printf("Informe o percentual de IR: ");
    scanf(" %f",&ir);
    printf("Salario liquido: R$ %.2f\n",gross_salary-gross_salary*(inss/100)-gross_salary*(ir/100));
}