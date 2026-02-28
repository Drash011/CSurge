#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();

	for (i = 1; i <= 5; i++)
	{
		for (j = i; j >= 1; j--)
		{
			if (i % 2 == 0)
				printf("%d\t", j);
			else
				printf("%d\t", j * 10);
		}
		printf("\n");
	}

	getch();
}