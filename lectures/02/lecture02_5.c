// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	int a = 2;
	int b = 5;
	double result , c , d;

	result = b / a;   		// ακέραιο πηλίκο διαίρεσης
	printf ("b / a = %.2f\n", result);

	result = b % a;   		// υπόλοιπο διαίρεσης
	printf ("b %% a = %.2f\n", result);

	result = (float) b / a;   		// διαίρεση
	printf ("(float) b / a = %.2f\n", result);
	
	result = 250 / 100;   		// διαίρεση
	printf ("250 / 100 = %.2f\n", result);
	
	result = 250.0 / 100;   		// διαίρεση
	printf ("250.0 / 100 = %.2f\n", result);
	
	result = 250 / 100.0;   		// διαίρεση
	printf ("250 / 100.0 = %.2f\n", result);
	return 0;
}

/* gcc lecture02_5.c -o 02_5 */
