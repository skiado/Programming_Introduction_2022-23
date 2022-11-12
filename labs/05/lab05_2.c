// Πρόγραμμα εμφάνισης του ονόματος ενός μήνα
#include <stdio.h>

int main() {
	int month;
	
	printf("Δώσε τον αριθμο του μήνα:");
	scanf("%i",&month);
	
	switch (month) {
		case 1:
			printf("Ιανουάριος \n");
			break;
		case 2:
			printf("Φεβουάριος \n");
			break;
		case 3:
			printf("Μάρτιος \n");
			break;
		case 4:
			printf("Απρίλιος \n");
			break;
		case 5:
			printf("Μάιος \n");
			break;
		case 6:
			printf("Ιούνιος \n");
			break;
		case 7:
			printf("Ιούλιος \n");
			break;
		case 8:
			printf("Αύγουστος \n");
			break;
		case 9:
			printf("Σεπτέμβριος \n");
			break;
		case 10:
			printf("Οκτώβριος \n");
			break;
		case 11:
			printf("Νοέμβριος \n");
			break;	
		case 12:
			printf("Δεκεμβριος \n");
			break;
		default:
			printf("Ο αριθμός δεν αντιστοιχεί σε μήνα,\n");
	}

}

/* gcc lab04_2.c -o lab04_2 */
