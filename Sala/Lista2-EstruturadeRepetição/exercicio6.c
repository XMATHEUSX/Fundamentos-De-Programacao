#include <stdio.h>
int main(void)
{
    int i;
    for (i = 0; i < 10; i = i + 2)
    {
        printf("O valor i = %d", i);
    }

    return 0;
}
// o algoritmo mostra o valores de i que inicialemnte possui  valor  0 porém esta tendo seu valor incrementendo de +2 dentro de um loop e os valores a cada passagem pelo o lopo são respectivamente 0,2,4,6 e 8 e loop continua enquanto o i for menor que 10