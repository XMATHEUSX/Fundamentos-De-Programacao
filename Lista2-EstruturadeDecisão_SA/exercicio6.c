/*
*iguais = 333,222,111
*primeiro é maior sem nenhum igual = 312,321
//primeiro é maior com dois iguais = 211,212,221,331,313,323,331,332 
segundo é o maior sem nenhum igual = 231,132
//segundo é maior com dois iguais =121,122,131,133,232,233
terceiro é o maior sem nenhum digito igual = 123,213
//terceiro é maior com digitos iguais = 112,113,223	

*/
#include <stdio.h>

int main(void)
{
    int  a = 0, b = 0, c = 0;
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &a);
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &b);
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
        {
            printf("Triangulo equilatero ");
        }
        else if ((a == b && b != c) || (b == c && c != a))
        {
            printf("Triangulo isosceles ");
        }
        else if (a != b && b != c)
        {
            printf("Triangulo escaleno ");
        }
    }
    else
    {
        printf("não foi possivel formar um Triangulo ");
    }

    return 0;
}
