#include <stdio.h>
#include <conio.h>

main()
{
	char character;

	clrscr();

	printf("\n\n\tEnter Any Character :");
	scanf("%c", &character);

	if (character >= 'A' && character <= 'Z')
	{
		printf("\n\tThis is Capital Alphabet !!");
	}
	else if (character >= 'a' && character <= 'z')
	{
		printf("\n\tThis is Small Alphabet !!");
	}
	else if (character >= '0' && character <= '9')
	{
		printf("\n\tThis id Digit !!");
	}
	else
	{
		printf("\n\tThis is Symbol !!");
	}

	getch();
}