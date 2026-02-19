#include <stdio.h>
#include <conio.h>

main ()
{
	int i, n;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++)
	{
		printf("\n\t%d * %d = %d", n, i, n * i);
	}

	getch();
}