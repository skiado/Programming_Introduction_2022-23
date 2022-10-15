// Χρήση αριθμητικών τελεστών

#include <stdio.h>
#include <math.h>

int main (void)
{
	double a = 2;
	double b = 5;
	double result;
	
	result = pow( b, a);   		// δυνάμεις
	printf ("pow(b,a) = %.2f\n", result);
	return 0;
}

/* gcc lecture02_6.c -o 02_6 -lm*/
