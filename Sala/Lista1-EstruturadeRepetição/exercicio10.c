#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char categoria;
    float total, feminino, masculino, infantil;
    int qtd, pedido_completo;
    printf("Informe a quantidade: ");
    scanf("%d", &qtd);
    if (qtd <= 0)
    {
        return 0;
    }
    else
    {
        printf("Informe a categoria - Feminino(F), Masculino(M) ou Infantil(I):");
        scanf(" %c", &categoria);
        categoria = toupper(categoria);
        if (categoria == 'F')
        {
            feminino += qtd;
            pedido_completo = 0;
        }
        else if (categoria == 'M')
        {
            masculino += qtd;
            pedido_completo = 0;
        }
        else if (categoria == 'I')
        {
            infantil += qtd;
            pedido_completo = 0;
        }
        else
        {
            printf("Categoria invalida\n");
            pedido_completo = 1;
        }
    }
    do
    {
        if (pedido_completo == 0)
        {
            printf("Informe a quantidade: ");
            scanf("%d", &qtd);
        }
        if (qtd > 0)
        {
            printf("Informe a categoria - Feminino(F), Masculino(M) ou Infantil(I):");
            scanf(" %c", &categoria);
            categoria = toupper(categoria);
            if (categoria == 'F')
            {
                feminino += qtd;
                pedido_completo = 0;
            }
            else if (categoria == 'M')
            {
                masculino += qtd;
                pedido_completo = 0;
            }
            else if (categoria == 'I')
            {
                infantil += qtd;
                pedido_completo = 0;
            }
            else
            {
                printf("Categoria invalida\n");
                pedido_completo = 1;
            }
        }
    } while (qtd > 0);
    total = feminino + masculino + infantil;
    //total = total / 100;
    printf("\n%.1f%% feminino\n", (feminino * 100) / total);
    printf("%.1f%% masculino\n", (masculino * 100) / total);
    printf("%.1f%% infantil ", (infantil * 100) / total);

    return 0;
}