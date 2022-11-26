// Πρόγραμμα που προσδιορίζει την επόμενη ημερομηνία
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

// Συνάρτηση υπολογισμού της επόμενης ημερομηνίας
struct date dateUpdate (struct date today){
	struct date tomorrow;
	int numberOfDays (struct date d);
	
	if ( today.day != numberOfDays (today) ) {
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
	return tomorrow;
}

// Συνάρτηση εύρεσης των ημερών ενός μήνα
int numberOfDays (struct date d){

	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ( isLeapYear (d) == true && d.month == 2 ) {
		days = 29;
	}
	else {
		days = daysPerMonth[d.month - 1];
	}
	return days;
}


// Συνάρτηση προσδιορισμού δίσεκτου έτους
bool isLeapYear (struct date d) {
	bool leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 ) {	
		leapYearFlag = true;   // Είναι δίσεκτο
	}
	else {
		leapYearFlag = false; // Δεν είναι δίσεκτο
	}
	return leapYearFlag;
}

int main (void) {
	struct date dateUpdate(struct date today);  //δήλωση συνάρτησης dateUpdate
	struct date thisDay, nextDay;

	printf ("Δώσε την τρέχουσα ημερομηνία (dd mm yyyy): ");
	scanf ("%i%i%i", &thisDay.day, &thisDay.month,&thisDay.year);

	nextDay = dateUpdate (thisDay);
	printf ("Η αυριανή ημερομηνία είναι: %i/%i/%.2i.\n", nextDay.day,nextDay.month, nextDay.year % 100);
	return 0;
}

/* gcc lecture08_4.c -o 08_04 */
