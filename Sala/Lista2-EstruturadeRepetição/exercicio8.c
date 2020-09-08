#include <stdio.h>
int main(void)
{
    int i, s = 1;
    //  for (i = 0; i < 5; i++)
    for (i = 1; i < 5; i++)
    {
        s = s * i;
    }
    printf("%d", s);
    return 0;
}
//esse algoritmo declara duas variaveis do tipo inteiro sendo elas s e i  e em seguinda inicializa s com o valor 1 e depois  cria um laço que sera repetido 4 vezes e dentro desse laço a faz a segunite operação s <- s *i e depois que o laço é concluido imprime na tela a variavel s
//a)a variavel s foi iniciada com 1,pois além de setar a variavel não pode ser inicializada com 0 ,porque essa variavel vai ser multiplicada e qualquer numero vezes 0 é 0
//b)o valor final do s é 0
//c)setar o i com o valor 1