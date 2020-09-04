#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int opcao = 0, a = 0, b = 0, c = 0;
    printf("digite um número:");
    scanf(" %d", &a);
    printf("digite um número:");
    scanf(" %d", &b);
    printf("digite um número:");
    scanf(" %d", &c);
    printf("Menu de opções:\n1 - Mostra os números em ordem crescente\n2 - Mostra os números em ordem decrescente\n3 - Mostra os números que são múltiplos de 2\nDigite a opção desejada:");
    scanf(" %d", &opcao);
    switch (opcao)
    {
    case 1:
        if (a == b || a == c || b == c)
        {
            printf("Todos números são iguais %d , %d , %d\n", a, b, c);
        }
        else if (a == b && a > c)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", c, a, b);
        }
        else if (a == c && c > b)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", b, a, c);
        }
        else if (b == c && b > a)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", a, b, c);
        }
        else if (a > c && b < c)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", b, c, a);
        }
        else if (a > b && b > c)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", c, b, a);
        }
        else if (b > a && a > c)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", c, a, b);
        }
        else if (b > a && b > c)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", a, c, b);
        }
        else if (c > a && a > b)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", b, a, c);
        }
        else if (c > a && c > b)
        {
            printf("Os números em ordem crescente são %d, %d e %d ", a, b, c);
        }
        break;

    case 2:
        if (a == b || a == c || b == c)
        {
            printf("Todos números são iguais %d , %d , %d\n", c, b, a);
        }
        else if (a == b && a > c)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", b, a, c);
        }
        else if (a == c && c > b)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", c, a, b);
        }
        else if (b == c && b > a)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", c, b, a);
        }
        else if (a > c && b < c)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", a, c, b);
        }
        else if (a > b && b > c)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", a, b, c);
        }
        else if (b > a && a > c)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", b, a, c);
        }
        else if (b > a && b > c)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", b, c, a);
        }
        else if (c > a && a > b)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", c, a, b);
        }
        else if (c > a && c > b)
        {
            printf("Os números em ordem decrescente são %d, %d e %d ", c, b, a);
        }
        break;
    case 3:
        if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0))
        {
            if ((a > b) && (b > c))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", c, b, a);
            }
            else if ((c > b) && (a > c))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", b, c, a);
            }
            else if ((b > a) && (a > c))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", c, a, b);
            }
            else if ((c > a) && (b > c))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", a, c, b);
            }
            else if ((c > a) && (a > b))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", b, a, c);
            }
            else if ((c > b) && (b > a))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", a, b, c);
            }
            else if ((c == b) && (b == a))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", c, b, a);
            }
            else if ((a > c) && (b == a))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", c, b, a);
            }
            else if ((c > b) && (c == a))
            {
                printf("Os números %d, %d e %d são múltiplos de 2", b, c, a);
            }
        }
        else if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 != 0))
        {
            if (a > b)
            {
                printf("Apenas os números %d e %d  são múltiplos de 2", b, a);
            }
            else if (a <= b)
            {
                printf("Apenas os números %d e %d  são múltiplos de 2", a, b);
            }
        }
        else if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0))
        {
            if (a > c)
            {
                printf("Apenas os números %d e %d  são múltiplos de 2", c, a);
            }
            else if (a <= c)
            {
                printf("Apenas os números %d e %d  são múltiplos de 2", a, c);
            }
        }
        else if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 == 0))
        {
            if (b > c)
            {
                printf("Apenas os números %d e %d  são múltiplos de 2", c, b);
            }
            else if (b <= c)
            {
                printf("Apenas os números %d e %d  são múltiplos de 2", b, c);
            }
        }
        else if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 == 0))
        {
            printf("Apenas o numero %d é múltiplo de 2", c);
        }
        else if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 != 0))
        {
            printf("Apenas o numero %d  é múltiplo de 2", b);
        }
        else if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 != 0))
        {
            printf("Apenas o numero %d é múltiplo de 2", a);
        }
        else if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0))
        {
            printf("Nenhum numero inserido é múltiplo de 2", a);
        }
    default:
        break;
    }
    return 0;
}