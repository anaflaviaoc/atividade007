/*
	Ana Flávia Oliveira Candido
*/

#include <stdio.h>

int triang(float a, float b, float c)
{
	float resultado = 0;

	if(a+b>c && a+c>b && b+c>a)
        {
                if(a==b && a==c)
                {
                	resultado = 1;
                }
                else
                {
                        if(a==b || a==c || b==c)
                        {
                                resultado = 2;
                        }
                        else
                        {
                                resultado = -1;;
                        }
                }
	}
        else
        {
                resultado = 0;
        }

	return resultado;
}
