#include <stdio.h>
#include <conio.h>

main ()
{
	int n, i = 1, prime = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	do
	{
		if (n % i == 0)
			prime++;
		i++;
	} while (i <= n);

	if (prime == 2)
		printf("\n\tThis is Prime Number...");
	else
		printf("\n\tThis is Not Prime Number...");

	getch();
}