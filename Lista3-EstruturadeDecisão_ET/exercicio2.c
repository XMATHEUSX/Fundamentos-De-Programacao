#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    printf("Digite um caractere:");
    scanf("%c", &ch);
    ch = toupper(ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("O caracter digita do pertence ao alfabeto\n");
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("VOGAL %c\n", ch);
            break;

        default:
            printf("CONSOANTE %c\n", ch);
            break;
        }
    }
    else
    {
        printf("O caracter digita do nao pertence ao alfabeto\n");
    }

    return 0;
}