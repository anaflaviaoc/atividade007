#include <stdio.h>
#include "biblioteca.h"

int main( int argc, char *argv[] )
{
        int n, i;

	printf("Digite um número: ");
        scanf("%d", &n);

        printf("Fatorial de %d é: %d\n", n, fat(n));

	return 0;
}
