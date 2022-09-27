/*
	Ana Flávia Oliveira Candido
*/

#include "biblioteca.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d;

	printf("Digite um número: ");
	scanf("%d", &a);

	printf("Digite outro número: ");
	scanf("%d", &b);

	printf("Digite mais um número: ");
	scanf("%d", &c);

	d = dec(decrescente);

	printf("Ordem decrescente: %d, %d, %d\n", d);

	return 0;
}
