/*1)Ler três valores inteiros diferentes,encontrar e mostrar o menor deles.
Deve ser criada uma variável para armazenar o menor número*/
#include <stdio.h>

int main(void){
    int primeiro,segundo,terceiro,menor;
    printf("Insira um Numero Inteiro:");
    scanf(" %d",&primeiro);
    printf("Insira um Numero Inteiro:");
    scanf(" %d",&segundo);
    printf("Insira um Numero Inteiro:");
    scanf(" %d",&terceiro);
    if(primeiro<=segundo && segundo<=terceiro)
    {
        menor = primeiro;
    }
    else if (primeiro>=segundo && segundo<=terceiro)
    {
        menor = segundo;
    }
    else if (terceiro<=segundo && terceiro<=primeiro)
    {
        menor = terceiro;
    }
    printf("O menor numero Inserido eh :  %d .\n",menor);
    return 0;
}
