#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char bem = 'a', dor = 'a';
    int temp = 0;
    printf("Paciente se Sente Bem ?");
    scanf(" %c", &bem);
    bem = toupper(bem);
    if (bem == 'S')
    {
        printf("Saudável");
    }
    else if (bem == 'N')
    {
        printf("Paciente tem dor ?");

        scanf(" %c", &dor);

        dor = toupper(dor);
        if (dor == 'S')
        {
            printf("Doente");
        }
        else if (dor == 'N')
        {
            printf("Temperatura do paciente?");
            scanf(" %d", &temp);
            if (temp <= 37)
            {
                printf("Saudável");
            }
            else if (temp > 37)
            {
                printf("Doente");
            }
            else
            {
                printf("Caractere invalído");
            }
        }
        else
        {
            printf("Caractere invalido");
        }
    }
    else
    {
        printf("Caractere invalido");
    }

    return 0;
}
