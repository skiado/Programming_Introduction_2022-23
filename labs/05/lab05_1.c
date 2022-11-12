// Πρόγραμμα εύρεσης του μεγαλύτερου τριών ακεραίων αριθμών
#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Δώσε τρεις ακέραιους αριθμούς:");
	scanf("%i %i %i",&a,&b,&c);
	
	if (a > b && a > c){
		printf("ο μεγαλύτερος είναι: %i \n",a);
	}
	else if (b > c){
		printf("ο μεγαλύτερος είναι: %i \n",b);
	}
	else {
		printf("ο μεγαλύτερος είναι: %i \n",c);
	}
	
	return 0;	
}

/* gcc lab04_1.c -o lab04_1 */
