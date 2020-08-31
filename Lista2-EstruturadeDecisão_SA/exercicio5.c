#include <stdio.h>

int main(void)
{
    float salario = 0, imposto = 0;
    printf("Informe seu salario : ");
    scanf("%f", &salario);
    if (salario >=0  &&salario <= 10000.00)
    {
        imposto = salario * 0;
    }
    else if (salario > 10000.00 && salario <= 25000.00)
    {
        imposto = (salario * 0.10);
    }
    else if (salario > 25000.00)
    {
        imposto = (salario * 0.25);
    }
    else
    {

        printf("Desculpe insira um Salario valido");
        return 0;
    }

    printf("Imposto de Renda a pagar :R$ %.2f ", imposto);

    return 0;
}