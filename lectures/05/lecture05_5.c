// Πρόγραμμα που δημιουργεί αριθμούς Fibonacci με πίνακα μεγέθους οριζόμενο από μεταβλητή
#include <stdio.h>

int main (void){
	int i, numFibs;
	
	printf ("Πόσοι αριθμοί Fibonacci να υπολογισθούν (από 1 ως 75); ");
	scanf ("%i", &numFibs);
	if (numFibs < 1 || numFibs > 75) {
		printf ("Αριθμός εκτός ορίων!\n");
		return 1;
	}
	unsigned long long int
	
	Fibonacci[numFibs];
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;

	for ( i = 2; i < numFibs; i++ ){
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
	}
	for ( i = 0; i < numFibs; i++ ){
		printf ("%llu ", Fibonacci[i]);
	}
	printf ("\n");
	return 0;
}
/* gcc lecture05_5.c -o 05_5 */
