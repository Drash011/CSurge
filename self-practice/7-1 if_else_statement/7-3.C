#include <stdio.h>
#include <conio.h>

main ()
{
	int num;

	clrscr();

	printf("\n\n\tEnter First Number :");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("\n\tThis Number is : Negative !!", num);
	}
	else
	{
		printf("\n\tThis Number is : Possitive !!", num);
	}
	getch();
}