// Πρόγραμμα ταξινόμησης πίνακα ακεραίων σε αύξουσα σειρά
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ARRAY_LEN 20
#define RAND_LIMIT 100

void sort (int a[], int n){
int i, j, temp;

	for ( i = 0; i < n - 1; i++ ){
		for ( j = i + 1; j < n; j++ ){
			if ( a[i] > a[j] ) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main (void){
	int i;
	int array[ARRAY_LEN];
	
	srand(time(0)); // Χρήση του ρολογιού για αρχικοποίηση της rand()	
	for ( i = 0; i < ARRAY_LEN; ++i ){
		array[i] = rand() % RAND_LIMIT;
	}

	printf ("Ο πίνακας πριν την ταξινόμηση:\n");
	for ( i = 0; i < ARRAY_LEN; ++i ){
		printf ("%i ", array[i]);
	}
	sort (array, ARRAY_LEN);
	printf ("\n\nΟ πίνακας μετά την ταξινόμηση:\n");
	for ( i = 0; i < ARRAY_LEN; ++i ){
		printf ("%i ", array[i]);
	}
	printf ("\n");
	return 0;
}

/* gcc lecture06_9a.c -o 06_9a */
