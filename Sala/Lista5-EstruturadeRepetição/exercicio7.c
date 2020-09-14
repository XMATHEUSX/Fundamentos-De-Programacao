#include <stdio.h>

int main(void)
{
    int numero = 0, unidade = 0, dezena = 0, centena = 0, milhar = 0, und_milhar = 0;
    //float resultado = 1;

    while (numero >= 0)
    {
        printf("informe o valor da base:");
        scanf(" %d", &numero);
        if (numero < 10)
        {
            printf("a soma dos numeros eh igual: %d\n", numero);
        }
        else if (numero < 100)
        {
            unidade = numero % 10;
            dezena = numero - unidade;
            dezena = dezena / 10;
            printf("a soma dos numeros eh igual: %d\n", (dezena + unidade));
        }
        else if (numero < 1000)
        {
            dezena = numero % 100;
            unidade = dezena % 10;
            dezena = dezena - unidade;
            centena = (numero - dezena - unidade) / 100;
            dezena = dezena / 10;

            printf("a soma dos numeros eh igual: %d\n", (centena + dezena + unidade));
        }
        else if (numero < 10000)
        {
            centena = numero % 1000;
            dezena = centena % 100;
            unidade = dezena % 10;
            centena = centena - dezena;
            dezena = dezena - unidade;
            milhar = (numero - centena - dezena - unidade) / 1000;
            centena = centena / 100;
            dezena = dezena / 10;
            printf("a soma dos numeros eh igual: %d\n", (milhar + centena + dezena + unidade));
        }
        else if (numero < 100000)
        {
            milhar = numero % 10000;
            centena = milhar % 1000;
            dezena = centena % 100;
            unidade = dezena % 10;
            milhar = milhar - centena;
            centena = centena - dezena;
            dezena = dezena - unidade;
            und_milhar = (numero - milhar - centena - dezena - unidade) / 10000;
            milhar = milhar / 1000;
            centena = centena / 100;
            dezena = dezena / 10;
            printf("a soma dos numeros eh igual: %d\n", (und_milhar + milhar + centena + dezena + unidade));
        }
        else if (numero < 0)
        {
            break;
        }
    }
    return 0;
}