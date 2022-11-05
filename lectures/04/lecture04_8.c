/* Πρόγραμμα υπολογισμού απλών παραστάσεων - τιμή σύμβολο πράξης τιμή */
#include <stdio.h>

int main (void){
	float value1, value2;
	char operator;
	
	printf ("Δώσε την παράσταση.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);
	switch (operator){
		case '+':
			printf ("%.2f\n", value1 + value2);
			break;
		case '-':
			printf ("%.2f\n", value1 - value2);
			break;
		case '*':
		case 'x':
			printf ("%.2f\n", value1 * value2);
			break;
		case '/':
			if ( value2 == 0 )
				printf ("Διαίρεση δια μηδέν.\n");
			else
				printf ("%.2f\n", value1 / value2);
			break;
		default:
			printf ("Άγνωστη πράξη.\n");
			break;
	}
	return 0;
}

/* gcc lecture04_8.c -o 04_8 */
