#include <stdio.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{
	int i,num, c, m;

	for(i=1; i<=5; i++)
	{
		printf("Digite\n:");
		scanf("%d", &num);
	}
	c = maior(m);
	printf("%d", c);

	return 0;
}
