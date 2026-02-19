#include <stdio.h>
#include <conio.h>

main ()
{
	int n, i, prime = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (i =1; i <= n; i++)
	{
		if (n % i == 0)
			prime++;
	}

	if (prime == 2)
		printf("\n\tThis is Prime Number...");
	else
		printf("\n\tThis is Not Prime Number..");

	getch();
}