/*2)Ler três valores inteiros diferentes, encontrare mostraro número do meio.
Deve ser criada uma variável para armazenar esse número.
Exemplo:Seja num1=5 , num2=8 e num3=1,então o número do meio é 5.

*iguais = 333,222,111
*primeiro é maior sem nenhum igual = 312,321
*primeiro é maior com dois iguais = 211,212,221,331,313,323,331,332 
*segundo é o maior sem nenhum igual = 231
*segundo é maior com dois iguais =121,122,131,132,133,232,233
terceiro é o maior sem nenhum digito igual = 123,213
terceiro é maior com digitos iguais = 112,113,223	

*/
#include <stdio.h>

int main(void)
{
    int primeiro, segundo, terceiro, meio = 0;
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &primeiro);
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &segundo);
    printf("Insira um Numero Inteiro:");
    scanf(" %d", &terceiro);
    if (primeiro == segundo || primeiro == terceiro)
    {
        meio = primeiro;
    }
    else if (segundo == terceiro)
    {
        meio = terceiro;
    }
    else if (primeiro > terceiro && segundo < terceiro)
    {
        meio = terceiro;
    }
    else if (primeiro > segundo && segundo > terceiro)
    {
        meio = segundo;
    }
    else if (primeiro > segundo && primeiro < terceiro)
    {
        meio = primeiro;
    }
    else if (primeiro < segundo && primeiro > terceiro)
    {
        meio = primeiro;
    }
    else if (segundo > primeiro && segundo < terceiro)
    {
        meio = segundo;
    }
    else if (terceiro > primeiro && segundo > terceiro)
    {
        meio = terceiro;
    }
    else if (terceiro >= primeiro && segundo >= terceiro)
    {
        meio = terceiro;
    }
    printf("O  numero do meio eh :  %d .\n", meio);
    return 0;
}
