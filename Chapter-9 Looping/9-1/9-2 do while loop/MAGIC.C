#include <stdio.h>
#include <conio.h>

main ()
{
	int n, sum, rem;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	do
	{
		sum = 0;
		do
		{
			rem = n % 10;
			sum = sum + rem;
			n = n / 10;
		} while (n != 0);

		n = sum;
	} while (n > 9);

	if (n == 1)
		printf("\n\tThis is Magic Number...");
	else
		printf("\n\tThis is Not Magic Number...");

	getch();
}