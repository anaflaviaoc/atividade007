/*
	Ana Flávia Oliveira Candido
*/

#include <stdio.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{
	float a, b, c, n;

	printf("Digite o valor do primeiro produto: \n");
	scanf("%f", &a);

        printf("Digite o valor do segundo produto: \n");
        scanf("%f", &b);

        printf("Digite o valor do terceiro produto: \n");
        scanf("%f", &c);

	n = menor(a,b,c);

	printf("O produto de menor preço é %.2f\n", n);

	return 0;
}
