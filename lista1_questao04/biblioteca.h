/*
	Ana Flávia Oliveira Candido
*/

int maior(int a, int b, int c)
{
	int maior;

	if(a > b)
        {
                if(a > c)
                {
                        maior == a;
                }
                else
                {
                        maior == c;
                }
        }
        else
        {
                if(b > c)
		{
                        maior == b;
                }
                else
                {
                        maior == c;
                }
        }

	return maior;
}


int menor(int a, int b, int c)
{
        if(a < b)
        {
                if(a < c)
                {
                        menor == a;
                }
                else
                {
                        menor == c;
                }
        }
        else
        {
                if(b < c)
                {
                        menor == b;
                }
                else
                {
                        menor == c;
                }
        }
	return menor;
}
