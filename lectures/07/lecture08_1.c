// Πρόγραμμα χρήσης structure
#include <stdio.h>

int main (void){
	struct date{
		int day;
		int month;
		int year;
	};
	struct date today;
	today.day = 27;
	today.month = 11;
	today.year = 2022;
	printf ("Σήμερα είναι: %i/%i/%.2i.\n", today.day,today.month,today.year % 100);
	return 0;
}

/* gcc lecture08_1.c -o 08_01 */
