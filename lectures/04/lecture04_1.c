// Εύρεση απόλυτης τιμής αριθμού
#include <stdio.h>

int main(){
	int number;
	
	printf("Δώσε έναν αριθμό:");
	scanf("%i",&number);
	
	if (number < 0){
		number = -number;
	}
	printf("Η απόλυτη τιμή του αριθμού είναι: %i \n",number);
	return 0;	
}

/* gcc lecture04_1.c -o 04_1 */
