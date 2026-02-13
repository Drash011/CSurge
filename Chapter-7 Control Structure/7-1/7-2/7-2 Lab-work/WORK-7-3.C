#include <stdio.h>
#include <conio.h>

main ()
{
	int a, b, c, d;

	clrscr();

	printf("\n\n\tEnter a VAlue of First Number : ");
	scanf("%d", &a);

	printf("\n\tEnter a VAlue of Second Number : ");
	scanf("%d", &b);

	printf("\n\tEnter a VAlue of Third Number : ");
	scanf("%d", &c);

	printf("\n\tEnter a VAlue of Fourth Number : ");
	scanf("%d", &d);

	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				printf("\n\tThe Maximum Value is : %d", a);
			}
			else
			{
				printf("\n\tThe Maximum Value is : %d", d);
			}
		}
		else
		{
			if (c > d)
			{
				printf("\n\tThe Maximum Value is : %d", c);
			}
			else
			{
				printf("\n\tThe Maximum Value is : %d", d);
			}
		}
	}
	else
	{
		if (b > c)
		{
			 if (b > d)
			 {
				printf("\n\tThe Maximum Value is : %d", b);
			 }
			 else
			 {
				printf("\n\tThe Maximum Value is : %d", d);
			 }
		}
		else
		{
			if (c > d)
			 {
				printf("\n\tThe Maximum Value is : %d", c);
			 }
			 else
			 {
				printf("\n\tThe Maximum Value is : %d", d);
			 }
		}
	}
	getch();
}