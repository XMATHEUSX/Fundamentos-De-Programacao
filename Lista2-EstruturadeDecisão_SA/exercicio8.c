#include <stdio.h>

int main(void)
{
    float salario_base = 0, gratificao = 0,salario_bruto = 0,salario_liquido = 0 ,ir = 0;
    printf("Insira o Seu salario Base:");
    scanf("%f", &salario_base);
    printf("Insira o Sua Gratificação:");
    scanf("%f", &gratificao);
    salario_bruto = salario_base+gratificao;
    ir = salario_base<1000?salario_bruto*0.15:salario_bruto*0.20;
    salario_liquido = salario_bruto - ir;
    printf("%.2f",salario_liquido);
    return 0 ;
}