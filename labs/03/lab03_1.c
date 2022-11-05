// Πρόγραμμα εμφάνισης πίνακα των τετραγώνων των αριθμών 1 - 10
#include <stdio.h>

int main (void)
{
	int k = 10;
	
	printf(" n       n^2  \n");
	printf("----    ------ \n");
	for(int i = 1; i <= k; i++){
		printf(" %2i      %3i \n",i,i*i);
	} 
	return 0;
}

/* gcc lab03_1.c -o lab03_1*/
