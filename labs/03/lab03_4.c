// Πρόγραμμα εμφάνισης των συνδυασμών των αριθμών 1-4 ανά δύο
#include <stdio.h>

int main (void)
{
	int k = 4;
	int i, j;
	
	i = 1;
	while (i <= k){
		j = 1;
		while (j <= k){
			printf("%i %i \n",i,j);
			j++;
		}
		i++;
	}
	return 0;
}

/* gcc lab03_4.c -o lab03_4*/
