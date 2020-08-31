#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int e,h,cg,mp;
    printf("exatas?");
    scanf("%d", &e);
    printf("humanas?");
    scanf("%d", &h);
    printf("conhecimentos gerais?");
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