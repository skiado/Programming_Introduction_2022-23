// Δημιουργία μιας linked list (απλοϊκή version)
#include <stdio.h>
#include <stdlib.h>

struct entry{
	int value;
	struct entry *next;
};

struct entry * create_list(){
	struct entry *start,*n1,*n2,*top;
	int val,flag = 1;
	start = (struct entry *) malloc(sizeof(struct entry));
	top = (struct entry *) malloc(sizeof(struct entry));
	start->next = top;
	n1 = start;
	top->next = (struct entry *) 0;	// Τέλος λίστας με null pointer
	while (flag==1){
		printf("Δώσε νέα τιμή (0 για τέλος):");
		scanf("%d",&val);
		if (val==0){
			flag = 0;
		}
		else {
			n2 = (struct entry *) malloc(sizeof(struct entry));
			n2->value = val;
			n2->next = (struct entry *) 0; // top;
			n1->next = n2;
			n1 = n2;
		}
	}
	return start->next;
}
			
			
int main (void){
	struct entry *list_pointer;
		
	list_pointer = create_list();
	while ( list_pointer != (struct entry *) 0 ) {
		printf ("%i\n", list_pointer->value);
		list_pointer = list_pointer->next;
	}
	return 0;
}

/* gcc lecture09_12.c -o 09_12  */
