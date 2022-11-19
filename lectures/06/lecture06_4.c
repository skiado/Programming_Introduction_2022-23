//Συνάρτηση που επιστρέφει τον μέγιστο κοινό διαιρέτη δύο μη αρνητικών ακεραίων
#include <stdio.h>

int gcd (int u, int v){
	int temp;
	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}
	return u;
}

int main (void){
	int result;
	result = gcd (150, 35);
	printf ("Ο ΜΚΔ των 150 και 35 είναι %i\n", result);
	result = gcd (1026, 405);
	printf ("Ο ΜΚΔ των 1026 και 405 είναι %i\n", result);
	printf ("Ο ΜΚΔ των 83 και 240 είναι %i\n", gcd (83, 	240));
	return 0;
}

/* gcc lecture06_4.c -o 06_4 */
