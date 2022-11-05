//Πρόγραμμα ελέγχου αρτιότητας αριθμού
#include <stdio.h>

int main (void) {
	int number_to_test, remainder;
	
	printf ("Δώσε αριθμό για έλεγχο: ");
	scanf ("%i", &number_to_test);
	remainder = number_to_test % 2;
	
	if ( remainder == 0 ){
		printf ("Ο αριθμός είναι άρτιος.\n");
	}
	else {
		printf ("Ο αριθμός είναι περιττός.\n");
	}
	
	return 0;
}

/* gcc lecture04_3.c -o 04_3 */
