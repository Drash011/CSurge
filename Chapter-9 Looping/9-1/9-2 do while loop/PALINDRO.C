#include <stdio.h>
#include <conio.h>

main ()
{
	int n, palin, rem, rev = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	palin = n;
	do
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	} while (n != 0);

	if (palin == rev)
		printf("\n\tThis is Palindrom Number...");
	else
		printf("\n\tThis is Not Palindrom Number...");

	getch();
}