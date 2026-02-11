#include <stdio.h>
#include <conio.h>

main ()
{
	int m, n;

	clrscr();

	printf("\n\n\tEnter First Number :");
	scanf("%d", &m);

	printf("\n\tEnter Second Number :");
	scanf("%d", &n);

	if(m >= n)
	{
		printf("\n\tThe Greater Number is = %d", m);
	}
	else
	{
		printf("\n\tThe Greater Number is = %d", n);
	}

	getch();
}