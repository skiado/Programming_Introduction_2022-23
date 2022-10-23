// Πρόγραμμα παρουσίασης της εντολής while
#include <stdio.h>

int main (void)
{
	int count = 1;
	while ( count <= 5 ) {
		printf ("%i\n", count);
		count++;
	}
	return 0;
}

/* gcc lecture03_3.c -o 03_3 */
