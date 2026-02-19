#include <stdio.h>
#include <conio.h>

main ()
{
	int n, arm, rem, sum = 0;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	arm = n;

	do
	{
		rem = n % 10;
		sum = sum + (rem * rem * rem);
		n = n / 10;
	} while (n != 0);

	if (arm == sum)
		printf("\n\tThis is Armstrong Number...");
	else
		printf("\n\tThis is Not an Armstrong Number...");

	getch();
}