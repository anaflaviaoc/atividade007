#include <stdio.h>
#include "biblioteca.h"

int main( int argc, char *argv[] )
{
        int n, i;

	printf("Digite o número de termos da série: ");
        scanf("%d", &n);

	printf("fib = %d\n", fib(n));

        return 0;
}
