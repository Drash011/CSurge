#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();
	printf("\n\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = i; j <= 5; j++)
		{
			if (i % 2 == 0)
			{
				(j % 2 == 0) ? printf("%c\t", j + 63)
					     : printf("%c\t", j + 95);
			}
			else
			{
				(j % 2 == 0) ? printf("%d\t", j)
					     : printf("%d\t", j + 64);
			}
		}
		printf("\n");
	}

	getch();
}