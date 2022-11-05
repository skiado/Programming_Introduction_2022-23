/* Πρόγραμμα υπολογισμού απλών παραστάσεων - τιμή σύμβολο πράξης τιμή */
#include <stdio.h>
int main (void) {
	float value1, value2;
	char operator;
	
	printf ("Δώσε την παράσταση.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);
	
	if ( operator == '+' ){
		printf ("%.2f\n", value1 + value2);
	}
	else if ( operator == '-' ){
		printf ("%.2f\n", value1 - value2);
	}
	else if ( operator == '*' ){
		printf ("%.2f\n", value1 * value2);
	}
	else if ( operator == '/' ){
		if ( value2 == 0 ){
			printf ("Διαίρεση δια μηδέν.\n");
		}
		else {
			printf ("%.2f\n", value1 / value2);
		}
	}
	else
		printf ("Άγνωστη πράξη.\n");
	return 0;
}

/* gcc lecture04_7.c -o 04_7 */
