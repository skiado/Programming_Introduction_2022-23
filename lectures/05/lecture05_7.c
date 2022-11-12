// Πρόγραμμα τυχαίων αριθμών
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LEN 200
#define RAND_LIMIT 2

int main (){
	int m[ARRAY_LEN];
	
	srand(time(NULL)); 
	for(int i=0; i<ARRAY_LEN; i++){
		m[i] = rand()%RAND_LIMIT;
	}
	for(int i=0; i<ARRAY_LEN; i++){
		printf("%i, ",m[i]);
	}
	printf("\n");
	return 0;
}

/* gcc lecture05_7.c -o 05_7 */
