/*
	Ana Flávia Oliveira Candido
*/

int primo(int n)
{
	int a;

	if(n == 1)
	{
		printf("é primo\n");
	}
	else if(n == 2)
	{
		printf("é primo\n");
	}
	else
	{
		a = 2;
		while(a<n)
		{
			if(n % a == 0)
			{
				printf("não é primo\n");
				return n;
			}
			a++;
		}
		printf("é primo\n");
	}
	return n;
}
