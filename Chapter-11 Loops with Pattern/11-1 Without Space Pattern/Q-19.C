#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();

	for (i = 5; i >= 1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			if (j % 2 == 0)
				printf("%d\t", j * j);
			else
				printf("%d\t", j);
		}
		printf("\n");
	}

	getch();
}