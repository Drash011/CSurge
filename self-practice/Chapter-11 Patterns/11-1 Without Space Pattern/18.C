#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n1 = 0, n2 = 1, r = n1 + n2;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d\t", r);
			r = n1 + n2;
			n1 = n2;
			n2 = r;
		}
		printf("\n\n");
	}

	getch ();
}