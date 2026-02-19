#include <stdio.h>
#include <conio.h>

main ()
{
	int i = 1 ,n;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	while (i <= n)
	{
		printf("%d.\t", i);
		i++;

		if (n % 2 == 0 && i >= 46)
		{
			break;
		}
	}

	getch();
}