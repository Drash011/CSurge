#include <stdio.h>
#include <conio.h>

main ()
{
	int i, n, multi = 1;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		multi = multi * i;
	}

	printf("\n\tMultipication\t: %d", multi);

	getch();
}