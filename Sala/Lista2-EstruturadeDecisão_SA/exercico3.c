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
    int primeiro, segundo, terceiro, meio = 0, menor = 0, maior = 0, iguais = 0;
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &primeiro);
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &segundo);
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &terceiro);
    if (primeiro == segundo || primeiro == terceiro || segundo == terceiro)
    {
        iguais = 1;
    }
    else if (primeiro > terceiro && segundo < terceiro)
    {
        maior = primeiro;
        meio = terceiro;
        menor = segundo;
    }
    else if (primeiro > segundo && segundo > terceiro)
    {
        maior = primeiro;
        meio = segundo;
        menor = terceiro;
    }
    else if (segundo > primeiro && primeiro > terceiro)
    {
        maior = segundo;
        meio = primeiro;
        menor = terceiro;
    }
    else if (segundo > primeiro && segundo > terceiro)
    {
        maior = segundo;
        meio = terceiro;
        menor = primeiro;
    }
    else if (terceiro > primeiro && primeiro > segundo)
    {
        maior = terceiro;
        meio = primeiro;
        menor = segundo;
    }
    else if (terceiro > primeiro && terceiro > segundo)
    {
        maior = terceiro;
        meio = segundo;
        menor = primeiro;
    }
    if (iguais != 1)
    {
        printf("Menor:%d Meio:%d Maior:%d\n", menor, meio, maior);
    }
    else
    {
        printf("Os numero nao sao distintos entre si");
    }

    return 0;
}
