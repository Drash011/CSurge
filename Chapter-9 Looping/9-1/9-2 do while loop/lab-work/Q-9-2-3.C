#include <stdio.h>
#include <conio.h>

main()
{
	int i = 2, n;

	clrscr();

	printf("\n\n\tEnter any Number :");
	scanf("%d", &n);

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\t", i);
		}
		i++;
	}while (i <= n);

	getch();
}