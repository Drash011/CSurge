#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (((i == 1 || i == 7) && (j >= 1 && j <= 3)) ||
			    ((i == 2 || i == 6) && (j == 1 || j == 5)) ||
			    ((i == 3 || i == 5) && (j == 1 || j == 4)) ||
			    (i == 4 && (j >= 1 && j <= 3)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	getch ();
}