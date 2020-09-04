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
    int a = 0;
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &a);
    if (a % 5 == 0 && a % 3 == 0 && a % 2 == 0)
    {
        printf("%d divisível por 2,3 e 5", a);
    }
    else if (a % 5 == 0 && a % 3 == 0 && a % 2 != 0)
    {
        printf("%d é divisível somente por 3 e por 5.", a);
    }
    else if (a % 5 == 0 && a % 3 != 0 && a % 2 == 0)
    {
        printf("%d é divisível somente por 5 e por 2.", a);
    }
    else if (a % 5 != 0 && a % 3 == 0 && a % 2 == 0)
    {
        printf("%d é divisível somente por 3 e por 2.", a);
    }
    else if (a % 5 == 0 && a % 3 != 0 && a % 2 != 0)
    {
        printf("%d é divisível somente por 5.", a);
    }
    else if (a % 5 != 0 && a % 3 == 0 && a % 2 != 0)
    {
        printf("%d é divisível somente por 3.", a);
    }
    else if (a % 5 != 0 && a % 3 != 0 && a % 2 == 0)
    {
        printf("%d é divisível somente por 2.", a);
    }
    else
    {
        printf("%d não é divisível por 5, 3 ou 2; ", a);
    }

    return 0;
}
