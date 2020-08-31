#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
    int numero = 0, aleatorio = 0;
    srand(time(NULL));
    aleatorio = rand() % 11;
    printf("Informe uma numero :");
    scanf("%d", &numero);
    if (numero == aleatorio)
    {
        printf("Certo! %d eh o numero magico", aleatorio);
    }
    if (numero > aleatorio)
    {
        printf("Errado,muito alto");
    }
    if (numero < aleatorio)
    {
        printf("Errado,muito Baixo");
    }
    return 0;
}