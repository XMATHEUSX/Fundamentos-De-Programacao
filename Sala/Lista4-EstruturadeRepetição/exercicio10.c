#include <stdio.h>
int main(void)
{
    int num = 0, soma = 0;
    do
    {
        printf("Infome um numero positivo:");
        scanf("%d", &num);
        /*if (num < 0)
        {
            break;
        }*/
        soma += num;

    } while (num > 0);
    printf("%d", soma);
    return 0;
}
// a estrutura de repetição do while

// o programa soma os numero informados diferentes de 0  e imprime na tela o resultado dessa soma

//Se informado um numero negativo esse numero negativo é contabilizado

/*colocar um 
if(num<0){
    break;
    }
    apos a leitura do numero */