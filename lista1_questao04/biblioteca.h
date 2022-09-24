/*
	Ana Flávia Oliveira Candido
*/

int maior(int a, int b, int c)
{
	int maior, menor;

	if(a > b)
        {
                if(a > c)
                {
                        maior = a;
                }
                else
                {
                        maior = c;
                }
        }
        else
        {
                if(b > c)
		{
                        maior = b;
                }
                else
                {
                        maior = c;
                }
        }
        if(a < b)
        {
                if(a < c)
                {
                        menor = a;
                }
                else
                {
                        menor = c;
                }
        }
        else
        {
                if(b < c)
                {
                        menor = b;
                }
                else
                {
                        menor = c;
                }
        }

	return maior;
	return menor;
}
