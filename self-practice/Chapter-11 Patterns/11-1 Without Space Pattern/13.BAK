#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, x = 1, y = 5, t1, t2, r1, r2;
	clrscr ();
	printf("\n\n");

	for (i = 5; i >= 1; i--)
	{
		t1 = x;
		t2 = y;
		r1 = i;
		r2 = i + 1;
		for (j = 5; j >= i; j--)
		{
			if ((i + j) % 2 == 0)
			{
				printf("%d\t", t1);
			}
			else
			{
				printf("%d\t", t2);
			}
			t1 = t1 - r1++;
			t2 = t2 - r2++;
		}
		y = y + i - 1;
		x = x + i;
		printf("\n\n");
	}

	getch ();
}