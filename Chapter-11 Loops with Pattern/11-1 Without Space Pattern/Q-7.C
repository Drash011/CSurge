#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr ();

	for (i = 10; i <= 14; i++)
	{
		for (j = i; j <= 14; j++)
		{
			printf("%d\t", j);
		}
		printf("\n");
	}

	getch();
}