/*
	Ana Flávia Oliveira Candido
*/

#include "biblioteca.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	float a, b, c, t;

	printf("Informe o primeiro lado do triângulo: ");
        scanf("%f", &a);

	printf("Informe outro lado do triângulo: ");
	scanf("%f", &b);

	printf("Informe o último lado do triângulo: ");
	scanf("%f", &c);

	t = triang(a,b,c);

	if(t == 0)
        {
                printf("Não é triângulo.\n");
        }
        if(t == 1)
        {
                printf("O triângulo é equilátero.\n");
        }
        if(t == -1)
        {
                printf("O triângulo é escaleno.\n");
        }
	if(t == 2)
	{
		printf("O triângulo é isósceles.\n");
	}

	return 0;
}
