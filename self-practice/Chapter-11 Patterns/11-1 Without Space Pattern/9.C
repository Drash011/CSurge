#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n = 1;
	clrscr ();
	printf("\n\n");

	for (i = 5; i >= 1; i--)
	{
		for (j = 5; j >= i; j--)
		{
			printf("%d\t", n);
			n += 2;
		}
		printf("\n\n");
	}

	getch ();
}
