#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float salario_minimo, salario_bruto, inss, salario_liquido;
    printf("Salário Mínimo: R$");
    scanf(" %f", &salario_minimo);
    printf("Salário Bruto: R$");
    scanf(" %f", &salario_bruto);
    if (salario_bruto <= (3 * salario_minimo))
    {
        inss = salario_bruto * 0.08;
    }
    else if (salario_bruto > (3 * salario_minimo))
    {
        inss = salario_bruto * 0.1;
        if (inss > salario_minimo)
        {
            inss = salario_minimo;
        }
    }
    salario_liquido = salario_bruto - inss;
    printf("Valor pago de INSS = R$ %.2f\n", inss);
    printf("Salário líquido = R$ %.2f\n", salario_liquido);
    return 0;
}