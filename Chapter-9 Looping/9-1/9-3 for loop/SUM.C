#include <stdio.h>
#include <conio.h>

main ()
{
	int i, n, sum = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	printf("\n\tSum\t: %d", sum);

	getch();
}