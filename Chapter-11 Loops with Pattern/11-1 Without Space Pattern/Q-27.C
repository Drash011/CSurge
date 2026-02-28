#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j, n;

	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		n = i;

		for (j = 1; j <= i; j++)
		{
			printf("%d\t", n);
			n = n + (5 - j);
		}
		printf("\n");
	}

	getch ();
}