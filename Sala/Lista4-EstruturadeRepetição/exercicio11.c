#include <stdio.h>
int main(void)
{
    int num = 0, cont = 0;
    printf("Infome um numero:");
    scanf("%d", &num);
    while (cont <= 10)
    {
        printf("%d\n", num * cont);
        cont = cont + 1;
    }

    return 0;
}
// a estrutura de repetição while

// o programa imprime na tela  a tabuada ate 10 do numero inserido.
