#include <stdio.h>
#include <conio.h>

main()
{
	int woods, movie_type, movie, tickets, members, food, food_qty, time_slot;

	float seat_price = 0, sub_total, food_price = 0, food_total, cgst, sgst, net_amount;

	char name [50];

	clrscr();
       //	printf("\n\n----------------------------------------------------");
	textcolor(RED);
	cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
	textcolor(WHITE);
       //	printf("\n\n----------------------------------------------------");

	printf("\n\n\tEnter Your Name :");
	scanf("%s", name);

	clrscr();
	printf("\n\tSelect Wood");
	printf("\n\t1. Hoolywood");
	printf("\n\t2. Bollywood");
	printf("\n\t3. Tollywood");
	printf("\n\t4. Kollywood");
	printf("\n\t5. Mollywood");
	printf("\n\t6. Sandalwood");
	printf("\n\t7. British Cinema");
	printf("\n\t8. Japanese Cinema");
	printf("\n\t9. Anime Cinema");
	printf("\n\t10. Chinese Cinema");
	printf("\n\t11. French Cinema");
	printf("\n\t12. Korean Cinema");
	printf("\n\t13. German Cinema");
	printf("\n\t14. Australian Cinema");
	printf("\n\tEnter Your Choice :");
	scanf("%d", &woods);

	switch (woods)
	{
		case 1:
			clrscr();
			printf("\n\n\tHollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Horror Movies");
			printf("\n\t3. Comedy Movies");
			printf("\n\t4. Science Fiction (Sci-Fi) Movies");
			printf("\n\t5. Romantic Movies");
			printf("\n\t6. Thriller Movies");
			printf("\n\t7. Animation Movies");
			printf("\n\t8. Fantasy Movies");
			printf("\n\t9. Adventure Movies");
			printf("\n\t10. Drama Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					printf("\n\n\tHOLLYWOOD ACTION MOVIES");
					printf("\n\t1. Avengers: Endgame");
					printf("\n\t2. Mad Max: Fury zroad");
					printf("\n\t3. John Wick");
					printf("\n\t4. Die Hard");
					printf("\n\t5. The Dark KNight");
					printf("\n\t6. Mission: Impossible - Fallout");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 240;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				case 2:
					clrscr();
					printf("\n\n\tHOLLYWOOD HORROR MOVIES");
					printf("\n\t1. The Conjuring");
					printf("\n\t2. IT");
					printf("\n\t3. A Quite Place");
					printf("\n\t4. Insidious");
					printf("\n\t5. The Nun");
					printf("\n\t6. Annabelle");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 3:
					clrscr();
					printf("\n\n\tHOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. The Hangover");
					printf("\n\t2. Home Alone");
					printf("\n\t3. Dumb and Dumber");
					printf("\n\t4. Superbbad");
					printf("\n\t5. Step Brothers");
					printf("\n\t6. Mr. Bran's Holiday");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 250;
							break;

						case 3:
							seat_price = 260;
							break;

						case 4:
							seat_price = 170;
							break;

						case 5:
							seat_price = 270;
							break;

						case 6:
							seat_price = 250;
							break;

					}
					break;

				case 4:
					clrscr();
					printf("\n\n\tHOLLYWOOD SCIENCE FICTION MOVIES");
					printf("\n\t1. Intersteller");
					printf("\n\t2. Inception");
					printf("\n\t3. The Matrix");
					printf("\n\t4. Avater");
					printf("\n\t5. Gravity");
					printf("\n\t6. Blade Runner 2049");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 260;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 240;
							break;

					}
					break;

				case 5:
					clrscr();
					printf("\n\n\tHOLLYWOOD ROMANTIC MOVIES");
					printf("\n\t1. Titanic");
					printf("\n\t2. The Notebook");
					printf("\n\t3. La La Land");
					printf("\n\t4. Pretty Womenn");
					printf("\n\t5. A Walk to Remember");
					printf("\n\t6. Me Before You");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 280;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;




		}
	}


	clrscr();
	printf("\n\n\tEnter Number of Tickets :");
	scanf ("%d", &tickets);

	clrscr();
	printf("\n\n\tEnter Members :");
	scanf("%d", &members);

	clrscr();
	printf("\n\n\tFood Menu");
	printf("\n\t1. Popcorn (120)");
	printf("\n\t2. Coke (80)");
	printf("\n\t3. Thumsup (100)");
	printf("\n\tEnter Food :");
	scanf("%d", &food);

	switch (food)
	{
		case 1:
			food_price = 120;
			break;

		case 2:
			food_price = 80;
			break;

		case 3:
			food_price =100;
			break;
	}

	clrscr();
	printf("\n\n\tEnter Food Quantity :");
	scanf("%d", &food_qty);

	clrscr();
	printf("\n\n\tShow Time");
	printf("\n\t1. Morning (10:00 AM)");
	printf("\n\t2. Afternoon (2:00 PM)");
	printf("\n\t3. Evening (6:00 PM)");
	printf("\n\t4. Night (9:30 PM)");
	printf("\n\tEnter Slot Time :");
	scanf("%d", time_slot);

	sub_total = (tickets * seat_price) + (food_price * food_qty);
	cgst = sub_total * 0.09;
	sgst = sub_total * 0.09;
	net_amount = sub_total + cgst + sgst;

	clrscr();
	printf("\n\n\t======================================");
	printf("\n\n\t-------    PARADISE CINEMA     -------");
	printf("\n\n\t--------------------------------------");
	printf("\n\tCustomer Name : %s", name);
	printf("\n\tTickets       : %d", tickets);
	printf("\n\tSeat Price    : %.2f", seat_price);
	printf("\n\tSub Total     : %.2f", sub_total);
	printf("\n\tCGST (9%%)     : %.2f", cgst);
	printf("\n\tSGST (9%%)     : %.2f", sgst);
	printf("\n\n\t--------------------------------------");
	printf("\n\tNet Amount    : %.2f", net_amount);
	printf("\n\tStatus        : CONFIRMED");
	printf("\n\n\t======================================");

	getch();
}