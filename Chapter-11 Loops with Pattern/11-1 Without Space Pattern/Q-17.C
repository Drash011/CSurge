#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();

	for (i = 2; i <= 6; i++)
	{
		for (j = 6; j >= i; j--)
		{
			printf("%d  ", j % 2);
		}
		printf("\n");
	}

	getch();
}