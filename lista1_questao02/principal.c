/*
        Ana Flávia Oliveira Candido - 2015090057
*/

#include <stdio.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{
        int n, m;

        scanf("%d", &n);
        m = valor(n);

        if(m == 0)
        {
                printf("%d é neutro\n", n);
        }
        if(m == 1)
        {
                printf("%d é positivo\n", n);
        }
        if(m == -1)
        {
                printf("%d é negativo\n", n);
        }

        return 0;
}
