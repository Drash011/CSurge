#include <stdio.h>
#include <conio.h>

main()
{
	int first, second, third;

	clrscr();

	printf("\n\n\tEnter a Value of First Number :");
	scanf("%d", &first);

	printf("\n\n\tEnter a Value of Second Number :");
	scanf("%d", &second);

	printf("\n\n\tEnter a Value of Third Number :");
	scanf("%d", &third);

	if (first < second)
	{
		if (first < third)
		{
			printf("\n\tThe Minimum Value is : %d", first);
		}
		else
		{
			printf("\n\tThe Minimum Value is : %d", third);
		}
	}
	else
	{
		if (second < third)
		{
			printf("\n\tThe Miminum Value is : %d", second);
		}
		else
		{
			printf("\n\tThe MInimum Value is : %d", third);
		}
	}
	getch();
}