#include <stdio.h>
#include <conio.h>

main ()
{
	int i = 0;

	clrscr();

	label:
	printf("\n\tDrashti");

	if (i <= 10)
	{
		printf("\t%d.", i);
		i++;
		goto label;
	}

	getch();
}