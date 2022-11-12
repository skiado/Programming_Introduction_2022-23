// Πρόγραμμα εμφάνισης του αριθμού των ημερών ενός μήνα
#include <stdio.h>

int main() {
	int month;
	
	printf("Δώσε τον αριθμο του μήνα:");
	scanf("%i",&month);
	
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Έχει 31 ημέρες. \n");
			break;
		case 2:
			printf("Έχει 28 ή 29 ημέρες. \n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Έχει 30 ημέρες. \n");
			break;	
		default:
			printf("Ο αριθμός δεν αντιστοιχεί σε μήνα.\n");
	}

}

/* gcc lab04_3.c -o lab04_3 */
