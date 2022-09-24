/*
	Ana Flávia Oliveira Candido
*/

int menor(float a, float b, float c)
{
	float menor;

	if(a < b)
        {
                menor = a;
                if(c < menor)
                {
                        menor = c;
                }
        }
        else
        {
                menor = b;
                if(c < menor)
                {
			menor = c;
                }
        }

	return menor;
}
