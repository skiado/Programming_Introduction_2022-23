//Πρόγραμμα δημιουργίας πίνακα πρώτων αριθμών
#include <stdio.h>
#include <stdbool.h>
#define LIMIT 15000

int main (void) {
	int p, d;
	_Bool isPrime;

	for ( p = 2; p <= LIMIT;++p ) {
		isPrime = true;
		for ( d = 2; d < (p/2)+1; ++d ){
			if ( p % d == 0 ){
				isPrime = false;
			}
		}
		if ( isPrime ){
			printf ("%i ", p);
		}
	}
	printf ("\n");
	
	return 0;
}

/* gcc lecture04_9.c -o 04_9 */
