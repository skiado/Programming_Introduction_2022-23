// Σάρωση μιας linked list
#include <stdio.h>

struct entry{
	int value;
	struct entry *next;
};

int main (void){
	struct entry n1, n2, n3;
	struct entry *list_ptr = &n1;
	
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0;    // Τέλος λίστας με null pointer
	while ( list_ptr != (struct entry *) 0 ) {
		printf ("%i\n", list_ptr->value);
		list_ptr = list_ptr->next;
	}
	return 0;
}

/* gcc lecture09_07.c -o 09_07  */
