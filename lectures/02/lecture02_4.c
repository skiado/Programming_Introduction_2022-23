// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	double d_result;

	result = c % b;   		// modulo
	printf ("c %% b = %i\n", result);

	result = c * b;   		// πολλαπλασιασμός
	printf ("c * b = %i\n", result);

	d_result =  c / b;			// διαίρεση
	printf ("c / b = %.2f\n", d_result);

	d_result = (float) c / b;			// διαίρεση
	printf ("(float) c / b = %.2f\n", d_result);

	d_result = (float) c / (float) b;			// διαίρεση
	printf ("(float) c / (float) b = %.2f\n", d_result);	

	return 0;
}

/* gcc lecture02_4.c -o 02_4 */
