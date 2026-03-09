#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, s;
	clrscr ();
	printf("\n\n");

	for (i = 'E'; i >= 'A'; i--)
	{
		for (s = 'E'; s > i; s--)
		{
			printf("  ");
		}
		for (j = 'A'; j <= i; j++)
		{
			printf("%c ", j);
		}
		printf("\n");
	}

	getch ();
}