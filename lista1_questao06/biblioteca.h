/*
	Ana Flávia Oliveira Candido
*/

void dec(int a, int b, int c)
{
	int* maior1, int* maior2, int*  maior3;

	if(a>b)
	{
		if(a>c)
		{
			*maior1 = a;
			if(b>c)
			{
				*maior2 = b;
				*maior3 = c;
			}
			else
			{
				*maior2 = c;
				*maior3 = b;
			}
		}
		else
		{
			*maior1 = c;
			*maior2 = a;
			*maior3 = b;
		}
	}
	else if(b>c)
	{
		*maior1 = b;
		if(a>c)
		{
			*maior2 = a;
			*maior3 = c;
		}
		else
		{
			*maior2 = c;
			*maior3 = a;
		}
	}
	else
	{
		*maior1 = c;
		*maior2 = b;
		*maior3 = a;
	}
}
