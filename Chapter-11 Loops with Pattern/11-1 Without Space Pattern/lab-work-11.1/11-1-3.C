#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();

	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= 6 - i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	getch();
}