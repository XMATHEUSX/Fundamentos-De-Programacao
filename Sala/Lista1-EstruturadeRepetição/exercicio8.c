#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char nacionalidade, curso;
    int est_curso = 0, idade, brasileiros = 0, br_sem_curso = 0, estrangeiros = 0, menor_idade_est_com_curso = 0;
    float ida_media_br_sem_curso = 0;
    while (idade != 0)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);
        if (idade == 0)
            break;
        printf("Informe a nacionalidade (B - Brasileiro ou E-estrangeiro): ");
        scanf(" %c", &nacionalidade);
        nacionalidade = toupper(nacionalidade);
        printf("Possui curso superior (S - Sim ou N-Nao): ");
        scanf(" %c", &curso);
        curso = toupper(curso);

        if (nacionalidade == 'B')
        {
            brasileiros++;
            printf("%c", nacionalidade);
            if (curso == 'N')
            {
                br_sem_curso++;
                ida_media_br_sem_curso += idade;
            }
        }
        else if (nacionalidade == 'E')
        {
            if (est_curso == 0 && curso == 'S')
            {
                menor_idade_est_com_curso = idade;
                est_curso++;
            }
            else if (est_curso > 0 && idade < menor_idade_est_com_curso && curso == 'S')
            {
                menor_idade_est_com_curso = idade;
            }
            estrangeiros++;
        }
    }
    printf("Quantidade de brasileiro: %d\n", brasileiros);
    printf("Quantidade de estrangeiros: %d\n", estrangeiros);
    printf("A idade media dos brasileiros sem curso superior eh: %.1f\n", ida_media_br_sem_curso);
    printf("A menor idade de estrangeiros com curso superior eh: %d", menor_idade_est_com_curso);

    return 0;
}