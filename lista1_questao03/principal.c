/*
	Ana Flávia Oliveira Candido
*/

#include <stdio.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{
	int a, b, c, m;

	printf("Digite um número: ");
	scanf("%d", &a);

	printf("Digite outro número: ");
	scanf("%d", &b);

	printf("Digite mais um número: ");
	scanf("%d", &c);

	m = maior(a,b,c);

	printf("O maior número é %d\n",m);

	return 0;
}
