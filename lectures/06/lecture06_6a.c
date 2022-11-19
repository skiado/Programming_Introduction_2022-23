// Συνάρτηση που επιστρέφει τη μικρότερη τιμή ενός πίνακα ακεραίων
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define RAND_LIMIT 100

int minimum (int values[10]){
	int minValue, i;
	minValue = values[0];
	
	for ( i = 1; i < 10; ++i ){
		if ( values[i] < minValue ){
			minValue = values[i];
		}
	}
	return minValue;
}

int main (void){
	int scores[10], i, minScore;
	int minimum (int values[10]);

	srand(time(0)); // Χρήση του ρολογιού για αρχικοποίηση της rand()	

	for ( i = 0; i < 10; ++i ){
		scores[i] = rand() % RAND_LIMIT;
		printf("%i ",scores[i]);
	}
	minScore = minimum (scores);
	printf ("\nΗ ελάχιστη τιμή είναι: %i\n", minScore);
	return 0;
}

/* gcc lecture06_6a.c -o 06_6a */
