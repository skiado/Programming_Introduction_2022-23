/*Πρόγραμμα υπολογισμού του μέσου όρου ενός συνόλου βαθμολογιών 
και του αριθμού των μαθημάτων κάτω από τη βάση */
#include <stdio.h>

#define BASE 5

int main (void)
{
	int numberOfGrades, grade;
	int gradeTotal = 0;
	int failureCount = 0;
	float average;
	
	printf ("Πόσους βαθμούς θα εισάγεις ; ");
	scanf ("%i", &numberOfGrades);
	for (int i = 1; i <= numberOfGrades; ++i ) {
		printf ("Δώσε βαθμό #%i: ", i);
		scanf ("%i", &grade);
		gradeTotal = gradeTotal + grade;
		if ( grade < BASE ){
			failureCount++;
		}
	}
	average = (float) gradeTotal / numberOfGrades;
	printf ("\nΜέσος όρος = %.2f\n", average);
	printf ("Μαθήματα κάτω από τη βάση = %i\n", failureCount);
	return 0;
}

/* gcc lecture04_2.c -o 04_2 */
