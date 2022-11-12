// Πρόγραμμα που παράγει τους πρώτους 15 αριθμούς Fibonacci  The Book of Calculation, 1202
#include <stdio.h>

int main (void) {
	int Fibonacci[15], i;
	
	Fibonacci[0] = 0; // Εξ ορισμού
	Fibonacci[1] = 1; // Εξ ορισμού

	for ( i = 2; i < 15; i++ ){
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
	}
	for ( i = 0; i < 15; ++i ){
		printf ("%i\n", Fibonacci[i]);
	}
	return 0;
}

/* gcc lecture05_3.c -o 05_3 */
