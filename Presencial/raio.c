#include <stdio.h>
int main()
{
const float pi = 3.1415926;     
float raio = 0;
printf("insira O raio do circulo: ") ;
scanf(" %f",&raio);
printf("Área: %.3f\nCircuferência: %.3f\n",(pi*(raio*raio)),2*pi*raio);
return 0;
}

