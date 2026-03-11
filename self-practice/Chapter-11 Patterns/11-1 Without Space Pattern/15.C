#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n = 1;
	clrscr ();
	printf("\n\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", n - i);
			n++;
		}
		printf("\n\n");
	}

	getch ();
}