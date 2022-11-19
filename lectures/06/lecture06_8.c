//Πρόγραμμα με συνάρτηση διπλασιασμού των τιμών πίνακα
#include <stdio.h>

void multiplyBy2 (float array[], int n){
	int i;
	
	for ( i = 0; i < n;i++ ){
		array[i] *= 2;
	}
}

int main (void){
	float floatVals[4] = { 1.2, -3.7, 6.2, 8.55 };
	int i;

	multiplyBy2 (floatVals, 4);
	for ( i = 0; i < 4; ++i ){
		printf ("%.2f  ", floatVals[i]);
	}
	printf ("\n");
	return 0;
}

/* gcc lecture06_8.c -o 06_8 */
