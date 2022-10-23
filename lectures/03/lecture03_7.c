// Πρόγραμμα εμφάνισης των συνδυασμών των αριθμών 1-4 ανά δύο
#include <stdio.h>

int main (void)
{
	int k = 4;
	int i, j;
	
	for(i = 1; i <= k; i++){
		for(j = 1; j <= k; j++){
			printf("%i %i \n",i,j);
		}
	}
	return 0;
}

/* gcc lecture03_7.c -o 03_7 */
