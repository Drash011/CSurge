#include <stdio.h>
#include <conio.h>

main ()
{
	int n, arm, rem, sum;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	arm = n;

	for (sum = 0; n != 0; n = n / 10)
	{
		rem = n % 10;
		sum = sum + (rem * rem * rem);
	}

	if (arm == sum)
		printf("\n\tThis is Armstrong Number...");
	else
		printf("\n\tThis is Not Armstrong Number...");

	getch();
}