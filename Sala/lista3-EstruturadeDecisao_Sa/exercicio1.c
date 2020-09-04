#include <stdio.h>
#include <locale.h>
int main(void)
{   setlocale(LC_ALL,"Portuguese");
    int num1, num2, resto;
    printf("Informe o primeiro valor:");
    scanf("%d", &num1);
    printf("Informe o segundo valor:");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0)
    {
        printf("Nao é possivel realizar divisao por zero\n");
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
    printf("O resto da divisao é %d \n", resto);
    return 0;
}
