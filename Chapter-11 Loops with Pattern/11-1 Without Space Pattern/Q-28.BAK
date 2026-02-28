#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j, n;

	clrscr ();
	printf("\n\n");

	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			n = 1 + ((j - 1) * (2 * 5 - j + 2)) / 2;
			if (j % 2 == 0)
				printf("%d\t", n + (5 - i));
			else
				printf("%d\t", n + (i - j));
		}
		printf("\n");
	}

	getch ();
}