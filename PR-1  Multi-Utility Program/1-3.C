#include <stdio.h>
#include <conio.h>

main()
{
	float first, second, third;

	clrscr();

	printf("Enter First Angle =");

	scanf("%f", &first);

	printf("Enter Second Angle =");

	scanf("%f", &second);

	third = 180 - (first + second);

	printf("Third Anglr of right triangle = %.0f", third);

	getch();

	getch();
}