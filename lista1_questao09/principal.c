/*
*/

#include <stdio.h>
#include "biblioteca.h"

int main(void)
{
	int n;

	printf("Digite um número: ");
	scanf("%d", &n);

	primo(n);

	return 0;
}
