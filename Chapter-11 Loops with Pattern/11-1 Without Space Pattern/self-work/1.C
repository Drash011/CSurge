#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	getch ();
}