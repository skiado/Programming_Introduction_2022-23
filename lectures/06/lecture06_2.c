// Συνάρτηση υπολογισμού του nth τριγωνικού αριθμού
#include <stdio.h>

void calculateTriangularNumber (int n){
	int i, triangularNumber = 0;
	
	for ( i = 1; i <= n; ++i ){
		triangularNumber += i;
	}
	printf ("Ο τριγωνικός αριθμός %i είναι %i\n", n, triangularNumber);
}
int main (void){
	calculateTriangularNumber (10);
	calculateTriangularNumber (20);
	calculateTriangularNumber (50);
	return 0;
}

/* gcc lecture06_2.c -o 06_2 */
