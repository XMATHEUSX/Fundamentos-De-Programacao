#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int idade = 1, cont = 0, cont2 = 0;
    char profi = 'a';
    float media =0 ;

    while (idade >= 0)
    {
        printf("informe a idade:");
        scanf("%d", &idade);
        if (idade <= 0)
        {
            break;
        }
        printf("Autonomo ou funcionario:");
        scanf(" %c", &profi);
        profi = toupper(profi);

        while (profi != 'A' && profi != 'F')
        {
            printf("insira A para Autonomo ou F para funcionario\n");
            printf("Autonomo ou funcionario:");
            scanf(" %c", &profi);
            profi = toupper(profi);
        }

        if (idade < 18 && profi == 'A')
        {
            cont++;
        }
        if (idade > 18 && profi == 'F')
        {
            media += idade;
            cont2++;
        }
        media = media/cont2;
    }
    printf("O numero de menores de 18 anos que são autonomos eh: %d\n", cont);
    printf("A idade media dos maiores de 18 anos que sao funcionario eh: %.2f", media);

    return 0;
}