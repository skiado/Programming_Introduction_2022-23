//Πρόγραμμα προσδιορισμού δίσεκτου έτους
#include <stdio.h>

int main (void) {
	int year;
	
	printf ("Δήλωσε το έτος για έλεγχο: ");
	scanf ("%i", &year);
	
	if ( (year%4 == 0 && year%100 != 0) || year%400 == 0 ){
		printf ("Είναι δίσεκτο έτος.\n");
	}
	else {
		printf ("Δεν είναι δίσεκτο έτος.\n");
	}
	return 0;
}

/* gcc lecture04_5.c -o 04_5 */
