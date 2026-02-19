#include <stdio.h>
#include <conio.h>

main()
{
	int i = 1, n, a = 0, b = 1, c;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	do {
		printf("%d\t", a);
		c = a + b;
		a = b;
		b = c;
		i++;
	}while (i <= n);

	getch();
}