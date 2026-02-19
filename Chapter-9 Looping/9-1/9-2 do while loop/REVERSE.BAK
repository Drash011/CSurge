#include <stdio.h>
#include <conio.h>

main ()
{
	int n, rem, rev = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	do
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	} while (n != 0);

	printf("\n\tReverse\t: %d", rev);

	getch();
}