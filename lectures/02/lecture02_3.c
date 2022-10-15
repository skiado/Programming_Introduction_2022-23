// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void) {
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;   		// αφαίρεση
	printf ("a - b = %i\n", result);

	result = b * c;   		// πολλαπλασιασμός
	printf ("b * c = %i\n", result);

	result = a / c;			// διαίρεση
	printf ("a / c = %i\n", result);

	result = a + (b * c);		// παρένθεση
	printf ("a + (b * c) = %i\n", result);

	printf ("a + b * c  = %i\n", a + b * c);

	return 0;
}

/* gcc lecture02_3.c -o 02_3 */
