// Πρόγραμμα που προσδιορίζει την επόμενη ημερομηνία
#include <stdio.h>

int main (void){
	struct date
	{
		int month;
		int day;
		int year;
	};
	struct date today, tomorrow;
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	printf ("Δώσε την τρέχουσα ημερομηνία (dd mm yyyy): ");
	scanf ("%i%i%i", &today.day, &today.month,&today.year);
	if ( today.day != daysPerMonth[today.month - 1] ) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if ( today.month == 12 ) {
		// Τέλος του χρόνου
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else {
		// Τέλος του μήνα
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	printf ("Η αυριανή ημερομηνία είναι: %i/%i/%.2i.\n", tomorrow.day,tomorrow.month, tomorrow.year % 100);
	return 0;
}

/* gcc lecture08_2.c -o 08_02 */
