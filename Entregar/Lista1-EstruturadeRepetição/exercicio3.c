#include <stdio.h>
int main(void)
{
    float i = 0;
    for (i = 10; i >= 0; i = i - 0.5)
    {
        printf("%.1f\n", i);
    }
}
