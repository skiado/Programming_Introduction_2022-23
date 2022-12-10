// Πρόγραμμα εμφάνισης χαρακτήρων μέχρι το τέλος του αρχείου
#include <stdio.h>

int main (void){
	int c;
	
	while ( (c = getchar ()) != EOF ){
		putchar (c);
	}
	return 0;
}

/* gcc lecture10_01.c -o 10_01  */
/* εκτέλεση με ./10_01 < data2.txt  για να εμφανήσει το περιεχόμενο του αρχείου κειμένου data2.txt  */
