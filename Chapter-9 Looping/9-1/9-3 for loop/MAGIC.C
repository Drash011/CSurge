#include <stdio.h>
#include <conio.h>

main ()
{
	int n, sum, rem;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (; n > 9;)
	{
		sum = 0;

		for (; n != 0; n = n / 10)
		{
			rem = n % 10;
			sum = sum + rem;
		}
		n = sum;
	}

	if (n == 1)
		printf("\n\tThis is Magic Number...");
	else
		printf("\n\tThis is Not Magic Number...");
	getch();
}