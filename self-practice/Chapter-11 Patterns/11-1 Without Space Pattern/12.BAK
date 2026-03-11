#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n = 1, x, y;
	clrscr ();
	printf("\n\n");

	for (i = 5; i >= 1; i--)
	{
		x = i;
		y = n;
		for (j = 5; j >= i; j--)
		{
			printf("%d\t", y);
			y = y - x;
			x++;
		}
		n = n + i;
		printf("\n\n");
	}

	getch ();
}