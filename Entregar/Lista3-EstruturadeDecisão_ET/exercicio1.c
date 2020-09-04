#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int e, h, cg, mp;
    printf("Nota de exatas?");
    scanf("%d", &e);
    printf("Nota de humanas?");
    scanf("%d", &h);
    printf("Nota em conhecimentos gerais?");
    scanf("%d", &cg);
    mp = ((e * 3) + (h * 2) + cg) / 6;
    printf("rendimento do candidato = ");
    if (mp >= 0 && mp <= 250)
    {
        printf("Insuficiente");
    }
    else if (mp >= 251 && mp <= 500)
    {
        printf("Baixo");
    }
    else if (mp >= 501 && mp <= 700)
    {
        printf("Baixo");
    }
    else if (mp >= 701 && mp <= 900)
    {
        printf("Bom");
    }
    else if (mp > 900)
    {
        printf("Excelente");
    }

    return 0;
}