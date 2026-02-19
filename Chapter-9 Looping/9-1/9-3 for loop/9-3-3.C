#include <stdio.h>
#include <conio.h>

main ()
{
	int i, n;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		printf("%d.\t", i);
	}

	getch();
}