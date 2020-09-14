#include <stdio.h>

int main(void)
{
    int numero = 0, unidade = 0, dezena = 0, centena = 0, milhar = 0, conta = 0, aux = 0, invertido = 0, soma;
    int quarto_digito = 0, digito_verificador = 0;

    printf("informe o numero da conta corrente:");
    scanf(" %d", &numero);
    if (numero < 10000)
    {
        centena = numero % 1000;
        conta = numero / 10;
        dezena = centena % 100;
        unidade = dezena % 10;
        quarto_digito = unidade;
        centena = centena - dezena;
        dezena = dezena - unidade;
        milhar = (numero - centena - dezena - unidade) / 1000;
        centena = centena / 100;
        dezena = dezena / 10;
        /* Construção do número invertido */
        aux = conta;
        while (aux > 0)
        {
            invertido = (invertido * 10) + (aux % 10);
            aux = aux / 10;
        }
        soma = conta + invertido;
        printf("Conta Corrente:%d\nPrimeiro Digito = %d\nSegundo Digito = %d\nTerceiro Digito = %d\nQuarto Digito = %d\n", conta, milhar, centena, dezena, unidade);
        printf("Invertido: %d\n%d + %d = %d\n", invertido, conta, invertido, (invertido + conta));

        centena = soma % 1000;
        dezena = centena % 100;
        unidade = dezena % 10;
        centena = centena - dezena;
        dezena = dezena - unidade;
        milhar = (soma - centena - dezena - unidade) / 1000;
        centena = centena / 100;
        dezena = dezena / 10;
        printf("\nPrimeiro Digito = %d\nSegundo Digito = %d\nTerceiro Digito = %d\nQuarto Digito = %d\n", milhar, centena, dezena, unidade);

        soma = (0 * milhar + 1 * centena + 2 * dezena + 3 * unidade);
        digito_verificador = soma % 10;
        printf("x = %d\nDigito verificador %d\n", soma, digito_verificador);
        if ((quarto_digito == unidade) && (unidade == digito_verificador))
        {
            printf("Digito verificador esta correto");
        }
        else
        {
            printf("Digito verificador esta incorreto");
        }
    }
    return 0;
}