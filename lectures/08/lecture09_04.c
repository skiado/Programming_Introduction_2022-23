// Πρόγραμμα για pointers σε structures
#include <stdio.h>

int main (void){
	struct date{
		int day;
		int month;
		int year;
	};
	struct date today, *datePtr;
	
	datePtr = &today;
	datePtr->day = 2;
	datePtr->month = 12;
	datePtr->year = 2022;
	printf ("Η ημερομηνία είναι : %i/%i/%.2i.\n",  datePtr->day, datePtr->month, datePtr->year %100);
	printf ("Η ημερομηνία είναι : %i/%i/%.2i.\n",  today.day, today.month, today.year %100);
	return 0;
}

/* gcc lecture09_04.c -o 09_04  */
