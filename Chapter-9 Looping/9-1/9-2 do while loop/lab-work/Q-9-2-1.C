#include <stdio.h>
#include <conio.h>

main()
{
	int i = 1;

	clrscr();

	printf("\n\n\n");

	do
	{
		printf("%d\t", i);
		i++;
	}while(i <= 10);

	getch();
}