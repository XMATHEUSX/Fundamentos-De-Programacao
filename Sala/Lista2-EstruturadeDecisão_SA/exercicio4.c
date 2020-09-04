#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char a;
    float peso_ideal = 0, altura = 0;
    printf("Qual o seu Genero : ");
    scanf("%c", &a);
    a = toupper(a);
    if (a == 'F')
    {
        printf("Qual a sua Altura(cm): ");
        scanf("%f", &altura);
        peso_ideal = (62.1 * (altura / 100)) - 44.7;
    }
    else if (a == 'M')
    {
        printf("Qual a sua Altura(cm): ");
        scanf("%f", &altura);
        peso_ideal = (72.7 * (altura / 100)) - 58;
    }
    else
    {

        printf("Desculpe insira um Genero Valido (M/F)");
        return 0;
    }

    printf("Seu Peso ideal eh %.2f Kg", peso_ideal);

    return 0;
}