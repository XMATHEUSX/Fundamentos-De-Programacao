#include <stdio.h>
int main(void)
{
    int i, s = 0;
    for (i = 0; i < 10; i++)
    {
        s = s + i;
    }
    printf("%d", s);
    return 0;
}
//esse algoritmo declara duas variaveis do tipo inteiro sendo elas s e i  e em seguinda inicializa s com o valor 0 e depois cria um laço que sera repetido 9 vezes e dentro desse laço a faz a seguinte operação s <- s + i e depois que o laço é concluido imprime na tela a variavel s
//a variável s foi inicializada com 0 para limpar a variavel,pois ela podia estar com um valor aleatoria