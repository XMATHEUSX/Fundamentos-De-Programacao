#include <stdio.h>
#include <math.h>
int main(void)
{
    int qtd = 0, dez = 0, cinco = 0, um = 0;
    float preco = 0, total = 0, pago = 0, troco = 0;
    do
    {
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &qtd);
        if (qtd <= 0)
        {
            break;
        }
        printf("Informe o valor unitario do produto: ");
        scanf("%f", &preco);
        total += qtd * preco;

    } while (qtd != 0);
    printf("TOTAL DA COMPRA: R$%.2f", total);

    printf("\n\nInforme o valor pago pelo cliente: ");
    scanf("%f", &pago);
    troco = pago - total;
    printf("Troco: %.2f", troco);
    printf("\n\n O valor do troco sera devolvido com:");
    dez = troco / 10;
    troco = troco - (dez * 10);
    printf("\n %d nota(s) de 10 reais", dez);
    cinco = troco / 5;
    troco = troco - (cinco * 5);
    printf("\n %d nota(s) de 5 reais", cinco);
    um = troco / 1;
    troco = troco - um;
    printf("\n %d nota(s) de 1 reais", um);
    printf("\n e %.2f centavos", troco);

    return 0;
}