//Συνάρτηση εύρεσης μέγιστου κοινού διαιρέτη δύο μη αρνητικών ακεραίων
#include <stdio.h>

void gcd (int u, int v){
	int temp;
	printf ("Ο ΜΚΔ των  %i και %i είναι ", u, v);
	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}
	printf ("%i\n", u);
}

int main (void){
	gcd (150, 35);
	gcd (1026, 405);
	gcd (83, 240);
	return 0;
}

/* gcc lecture06_3.c -o 06_3 */
