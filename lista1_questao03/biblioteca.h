/*
	Ana Flávia Oliveira Candido
*/

#include <stdio.h>

int maior(int a, int b, int c)
{
	int maior;

	if(a > b)
	{
		maior = a;
		if(c > maior)
		{
			maior = c;
		}
	}
	else
	{
		maior = b;
		if(c > maior)
		{
			maior = c;
		}
	}

	return maior;
}
