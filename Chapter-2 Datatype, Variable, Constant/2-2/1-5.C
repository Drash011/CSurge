#include <stdio.h>
#include <conio.h>

main()
{
	float r, perimeter;

	clrscr();

	printf("Enter the radius of circle : ");

	scanf("%f", &r);

	perimeter = 2 * 3.14 * r;

	printf("Perimeter of circle = %.2f", perimeter);

	getch();
}
