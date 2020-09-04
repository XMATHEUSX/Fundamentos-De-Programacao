#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("Informe o primeiro valor:");
    scanf("%d", &num1);
    printf("Informe o segundo valor:");
    scanf("%d", &num2);

    if (num1 % 5 == 0 && num2 % 5 == 0)
    {
        printf("Ambos o numero sao divisiveis por 5\n");
    }
    else if (num1 % 5 == 0 || num2 % 5 == 0)
    {
        printf("Pelo menos um dos numeros inseridos e divisivel por 5\n");
    }
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Ambos o numero sao divisiveis por 2\n");
    }
    else if (num1 % 2 == 1 || num2 % 2 == 1)
    {
        printf("Pelo menos um dos numeros inseridos e impar\n");
    }
    return 0;
}