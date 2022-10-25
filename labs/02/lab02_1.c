// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	float f = 27;
	float c;

	c = (f - 32) / 1.8;
	printf ("%.2f F = %.2f C\n", f,c);	

	return 0;
}

/* gcc farenheit01.c -o farenheit01 */
