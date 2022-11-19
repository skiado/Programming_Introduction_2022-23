// Πρόγραμμα αναδρομικού υπολογισμού του παραγοντικού
#include <stdio.h>

unsigned long int factorial (unsigned int n){
	unsigned long int result;
	
	if ( n == 0 ){
		result = 1;
	}
	else {
		result = n * factorial (n - 1);
	}
	return result;
}

int main (void){
	unsigned int j;

	for ( j = 0; j < 16; ++j ){
		printf ("%2u! = %lu\n", j, factorial (j));
	}
	return 0;
}
/* gcc lecture06_12.c -o 06_12  */
