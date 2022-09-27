int maior(int num)
{
	int m = 0, cont;

	for(cont = 1; cont<=5; cont++)
	{
		if(num>m)
		{
			m=num;
			printf("%d", num);
		}
		cont++;
		printf("Passei");
	}

	return m;
}
