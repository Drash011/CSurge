#include <stdio.h>
#include <conio.h>

main()
{
	float r, area;

	clrscr();

	printf("Enter the area of circle : ");

	scanf("%f", &r);

	area = 3.14 * r * r;

	printf("Area of circle = %.2f", area);

	getch();
}

