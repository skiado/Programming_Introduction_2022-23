// Πολυδιάστατοι πίνακες διαστάσεων ορισμένων με μεταβλητές
#include <stdio.h>

// Συνάρτηση πολλαπλασιασμού πίνακα με σταθερή τιμή (scalar)
void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols],int scalar){
	int row, column;
	
	for ( row = 0; row < nRows; ++row ){
		for ( column = 0; column < nCols; ++column ){
			matrix[row][column] *= scalar;
		}
	}
}
// Συνάρτηση εμφάνισης πίνακα
void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]){
	int row, column;
	for ( row = 0; row < nRows; ++row) {
		for ( column = 0; column < nCols; ++column ){
			printf ("%5i", matrix[row][column]);
		}
		printf("\n");
	}
	printf ("\n");
}

int main (void){

	int sampleMatrix[3][5] ={
				{ 7, 16, 55, 13, 12 },
				{ 12, 10, 52, 0, 7 },
				{ -2, 1, 2, 4, 9 }
	};
	printf ("Αρχικός πίνακας:\n");
	displayMatrix (3, 5, sampleMatrix);
	scalarMultiply (3, 5, sampleMatrix, 2);
	printf ("\nΠολλαπλασιαμένος επί 2:\n");
	displayMatrix (3, 5, sampleMatrix);
	scalarMultiply (3, 5, sampleMatrix, -1);
	printf ("\nΜετά πολλαπλασιασμένος επί -1:\n");
	displayMatrix (3, 5, sampleMatrix);
	return 0;
}

/* gcc lecture06_10.c -o 06_10 */
