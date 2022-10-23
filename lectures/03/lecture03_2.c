/*Πρόγραμμα υπολογισμού του 200 τριγωνικού αριθμού
  με χρήση της εντολής for  */
  
#include <stdio.h>

int main (){
	int n , triangularNumber;

	triangularNumber = 0;

	for ( n = 1; n <= 200; n++){
		triangularNumber = triangularNumber + n;
	}
	printf ("Ο διακοσιοστός τριγωνικός αριθμός είναι %i\n", triangularNumber);
	return 0;
}

/* gcc lecture03_2.c -o 03_2 */


