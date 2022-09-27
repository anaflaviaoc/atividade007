/*
	Ana Flávia Oliveira Candido
*/

int fat( int n)
{
        int fat;

        for (fat = 1; n > 1; n--)
        {
                fat = fat * n;
        }
        return fat;
}
