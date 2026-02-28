#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();
	printf("\n\n");
	for (i = 5; i >= 1; i--)
	{
		for (j = 5; j >= 6 - i; j--)
		{
			if (j % 2 == 0)
				printf("%d  ", j * j);
			else
				printf("%d  ", j * j * j);
		}
		printf("\n");
	}

	getch();
}