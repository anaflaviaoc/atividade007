/*
        Ana Flávia Oliveira Candido - 2015090057
*/
#include <stdio.h>
#include "biblioteca.h"


int main(int argc, char  *argv[])
{
        int a, b,c;

        printf("Digite um número:\n");
        scanf("%d", &a);
        printf("Digite outro número: \n");
        scanf("%d", &b);

        c = maior(a,b);

        printf("O maior número é: %d\n",c);

        return 0;
}
