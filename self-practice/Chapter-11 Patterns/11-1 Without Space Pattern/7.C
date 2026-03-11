#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		n = i - 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d ", n + i);
			n += 2;
		}
		printf("\n");
	}

	getch ();
}