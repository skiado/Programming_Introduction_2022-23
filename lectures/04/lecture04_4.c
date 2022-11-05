//Πρόγραμμα σύνθετων ελέγχων
#include <stdio.h>
#include <stdbool.h>

int main (void) {
	int grade;
	int number_of_grades = 0;
	_Bool is_right;
	
	for(int i = 0; i < 5; i++){
		is_right = false;
		while (!is_right ){
			printf ("Δώσε έναν βαθμό: ");
			scanf ("%i", &grade);
			if (  grade < 0 || grade > 10 ){
				printf ("Ο βαθμός είναι εκτός ορίων.\n");
			}
			else {
				is_right = true;
			}
		}
		if ( grade >= 6 && grade <= 8){
			number_of_grades++;
		}
	}
	printf("Οι βαθμοί μεταξύ 6 και 8 είναι %i.\n",number_of_grades);
	return 0;
}

/* gcc lecture04_4.c -o 04_4 */
