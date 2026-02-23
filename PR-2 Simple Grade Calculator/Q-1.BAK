#include <stdio.h>
#include <conio.h>

main ()
{
	int score;
	char grade;

	clrscr();

	printf("\n\n\tEnter Your Score  :");
	scanf("%d", &score);

	if (score < 0 || score > 100)
	{
		printf("Invalid Score...!!");
	}

	// Step 1 : Grade Calculation
	grade = (score >= 90 && score <= 100) ? 'A' :
		(score >= 80 && score <= 90) ? 'B' :
		(score >= 70 && score <= 80) ? 'C' :
		(score >= 34 && score <= 70) ? 'D' : 'F' ;

	printf("\n\tYour Grade is %c.", grade);

	// Step 2 : Additional Comments
	switch (grade)
	{
		case 'A' :
			printf("\n\n\tExcellent Work...!");
			break;
		case 'B' :
			printf("\n\n\tWell Done...!");
			break;
		case 'C' :
			printf("\n\n\tGood Job...!");
			break;
		case 'D' :
			printf("\n\n\tYou passed, but you could do better...!");
			break;
		case 'F' :
			printf("\n\n\tSorry, you Failed...!");
			break;
		default :
			printf("\n\n\tInvalid Grade");
	}

	// Step 3 : Eligibility Check
	if (grade >= 'A' && grade <= 'D')
	{
		printf("\n\n\tYou are eligible for the next level.");
	}
	else
	{
		printf("\n\n\tPlease tyr again next time.");
	}

	getch();
}