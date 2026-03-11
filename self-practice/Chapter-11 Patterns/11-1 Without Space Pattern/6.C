#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n = 5;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", i + j - 1);
		}
		printf("\n");
	}

	getch ();
}