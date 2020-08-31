#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char clientes, alternativa, faminto, reserva, bar, chovendo, sex;
    int espera;
    printf("clientes?");
    scanf("%c", &clientes);
    clientes = toupper(clientes);
    if (clientes == 'N')
    {
        printf("Deve esperar: Nao");
    }
    else if (clientes == 'A')
    {
        printf("Deve esperar: Sim");
    }
    else if (clientes == 'C')
    {
        printf("Espera Estimada?");
        scanf("%d", &espera);
        if (espera >= 0 && espera < 10)
        {
            printf("Deve esperar: Sim");
        }
        else if (espera >= 10 && espera < 30)
        {
            printf("faminto?");
            scanf("%c", &faminto);
            scanf("%c", &faminto);
            faminto = toupper(faminto);
            if (faminto == 'N')
            {
                printf("Deve esperar: Sim");
            }
            else if (faminto == 'S')
            {
                printf("Alternativa?");
                scanf("%c", &alternativa);
                scanf("%c", &alternativa);
                alternativa = toupper(alternativa);
                if (alternativa == 'N')
                {
                    printf("Deve esperar: Sim");
                }
                else if (alternativa == 'S')
                {
                    printf("Chovendo?");
                    scanf("%c", &chovendo);
                    scanf("%c", &chovendo);
                    chovendo = toupper(chovendo);
                    if (chovendo == 'N')
                    {
                        printf("Deve esperar: Nao");
                    }
                    else if (chovendo == 'S')
                    {
                        printf("Deve esperar: Sim");
                    }
                }
            }
        }
        else if (espera >= 30 && espera <= 60)
        {
            printf("Alternativa?");
            scanf("%c", &alternativa);
            scanf("%c", &alternativa);
            alternativa = toupper(alternativa);
            if (alternativa == 'N')
            {
                printf("Reserva?");
                scanf("%c", &reserva);
                scanf("%c", &reserva);
                reserva = toupper(reserva);
                if (reserva == 'N')
                {
                    printf("Bar?");
                    scanf("%c", &bar);
                    scanf("%c", &bar);
                    bar = toupper(bar);
                    if (bar == 'N')
                    {
                        printf("Deve esperar: Nao");
                    }
                    else if (bar == 'S')
                    {
                        printf("Deve esperar: Sim");
                    }
                }
                else if (reserva == 'S')
                {
                    printf("Deve esperar: Sim");
                }
            }
            else if (alternativa == 'S')
            {
                printf("Sex/Sab?");
                scanf("%c", &sex);
                scanf("%c", &sex);
                sex = toupper(sex);
                if (sex == 'N')
                {
                    printf("Deve esperar: Nao");
                }
                else if (sex == 'S')
                {
                    printf("Deve esperar: Sim");
                }
            }
            else if (espera > 60)
            {
                printf("Deve esperar: Nao");
            }
        }

        return 0;
    }
}