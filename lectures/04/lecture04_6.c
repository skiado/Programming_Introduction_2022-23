// Πρόγραμμα υλοποίησης συνάρτησης προσήμου
#include <stdio.h>

int main (void) {
	int number;
	char sign;
	
	printf ("Please type in a number: ");
	scanf ("%i", &number);
	
	if ( number < 0 ){
		sign = '-';
	}
	else if ( number == 0 ){
		sign = ' ';
	}
	else {
	// Πρέπει να είναι θετικός
		sign = '+';
	}
	printf ("Sign = %c\n", sign);
	return 0;
}

/* gcc lecture04_6.c -o 04_6 */
