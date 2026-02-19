#include <stdio.h>
#include <conio.h>

main ()
{
	int n, rem, rev = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	for (; n != 0; n = n / 10)
	{
		rem =
		 n % 10;
		rev = rev * 10 + rem;
	}

	printf("\n\tReverse\t: %d", rev);

	getch();
}