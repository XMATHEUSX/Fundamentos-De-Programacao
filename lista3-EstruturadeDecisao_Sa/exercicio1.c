#include <stdio.h>
int main(void)
{
    int num1, num2, resto;
    printf("Informe o primeiro valor:");
    scanf("%d", &num1);
    printf("Informe o segundo valor:");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0)
    {
        printf("Nao eh possivel realizar divisao por zero\n");
        return 0;
    }
    else if (num1 > num2)
    {
        resto = num1 % num2;
    }
    else
    {
        resto = num2 % num1;
    }
    printf("O resto da divisao eh %d \n", resto);
    return 0;
}