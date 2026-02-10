#include <stdio.h>
#include <conio.h>

main()
{
	float Base, HRA, DA, TA, Gross;

	clrscr();

	printf("Enter Base salarty Here\t =");
	scanf("%f",&Base);

	printf("Enter HRA\t =");
	scanf("%f",&HRA);

	printf("Enter DA\t =");
	scanf("%f",&DA);

	printf("Enter TA\t =");
	scanf("%f",&TA);

	Gross = Base + (HRA / 100) + (DA / 100) + (TA / 100);

	printf("Gross Salary = %f",Gross);
	getch();
}