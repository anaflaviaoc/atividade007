void saque(int valor)
{
	int n100=0, n50=0, n10=0, n5=0, n1=0;

	n100= valor/100;
	valor= valor%100;

	n50= valor/50;
	valor= valor%50;

	n10= valor/10;
	valor= valor%10;

	n5= valor/5;
	valor= valor%5;

	n1= valor;

}
