#include <stdio.h>

int main(void)
{
    int opcao = 0;
    float imposto = 0, salario = 0, salario_novo = 0;
    printf("Insira o Seu salario:");
    scanf("%f", &salario);
    printf("Menu de opcoes:\n 1-Imposto\n 2-Novo salario\n 3-Classificacao\nDigite a opcao desejada:");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        if (salario >= 0 && salario <= 1000.00)
        {
            imposto = salario * 0.05;
        }
        else if (salario > 1000.00 && salario <= 1500.00)
        {
            imposto = (salario * 0.10);
        }
        else if (salario > 1500.00)
        {
            imposto = (salario * 0.15);
        }
        printf("imposto sobre o salario R$%.2f", imposto);
        break;
    case 2:
        if (salario >= 0 && salario < 1000.00)
        {
            salario_novo = salario + 75.00;
        }
        else if (salario >= 1000.00 && salario <= 1500.00)
        {
            salario_novo = (salario + 100);
        }
        else if (salario > 1500.00)
        {
            salario_novo = (salario + 150);
        }
        printf(" Voce teve um aumento de R$ %.2f e agora seu salario e de R$%.2f", salario_novo - salario, salario_novo);
        break;
    case 3:
        if (salario >= 0 && salario < 1000.00)
        {
            printf("Categoria B");
        }
        else if (salario >= 1000.00)
        {
            printf("Categoria A");
        }
        break;
    default:
        break;
    }
}