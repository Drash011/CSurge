#include <stdio.h>
#include <conio.h>
main()
{
	int a, b;
	clrscr();
	printf("\n\nBefore Swaping Value \n\n");

	printf("\nEnter Value of a\t: ");
	scanf("%d", &a);

	printf("\nEnter Value of b\t: ");
	scanf("%d", &b);

	printf("\n\n\n\nAfter Swaping Value \n\n");

	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n a = %d", a);
	printf("\n b = %d", b);

       //	 a = a ^ b;
       //	 b = a ^ b;
       //	 a = a ^ b;
       // 	 printf("\n a = %d", a);
       //	printf("\n b = %d", b);

       //	a = a * b;
       //	b = a / b;
       //	a = a / b;
       //	printf("\n a = %d", a);
       //	printf("\n b = %d", b);

	getch();
}