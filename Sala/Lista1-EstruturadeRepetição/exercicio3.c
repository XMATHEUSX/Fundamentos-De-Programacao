#include <stdio.h>
int main(void)
{
    float i = 0;
    for (i = 0; i <= 4; i = i+0.25)
    {
        printf("%.2f\t",i);
    }
}