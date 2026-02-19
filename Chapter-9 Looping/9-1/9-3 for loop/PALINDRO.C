#include <stdio.h>
#include <conio.h>

main ()
{
	int n, palin, rem, rev = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	palin = n;

	for (; n != 0; n = n / 10)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
	}

	if (palin == rev)
		printf("\n\tThis is Paliindrom Number...");
	else
		printf("\n\tTHis is Not a Palindrom Number...");

	getch();
}