/*
	Ana Flávia Oliveira Candido
*/

#include <stdio.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{
	int a, b, c, m, n;

	printf("Digite um número:\n");
        scanf("%d", &a);

        printf("Digite outro número: \n");
        scanf("%d", &b);

        printf("Digite mais um número: \n");
        scanf("%d", &c);

	m = maior(a,b,c);
	n = menor(a,b,c);

	printf("O maior número é %d\n", m);
	printf("O menor número é %d\n", n);

	return 0;
}
