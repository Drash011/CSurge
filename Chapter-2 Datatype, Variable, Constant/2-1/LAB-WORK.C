#include <stdio.h>
#include <conio.h>

main()
{	int a = 15, b = 5;

	clrscr();

	printf("\n\n   Addition of %d and %d is %d", a, b, a+b);

	printf("\n\n   Substraction of %d and %d is %d", a, b, a-b);

	printf("\n\n   Multiplication of %d and %d is %d", a, b, a*b);

	printf("\n\n   Divison of %d and %d is %d", a, b, a/b);

	printf("\n\n   Modulo of %d and %d is %d", a, b, a%b);

	printf("\n\n\n   %d + %d = %d", a, b, a+b);

	printf("\n\n   %d - %d = %d", a, b, a-b);

	printf("\n\n   %d * %d = %d", a, b, a*b);

	printf("\n\n   %d / %d = %d", a, b, a/b);

	printf("\n\n   %d % %d = %d", a, b, a%b);

	printf("\n\n   %d %% %d = %d", a, b, a%b);

	getch();
}
