// Πρόγραμμα εύρεσης Μέγιστου Κοινού Διαιρέτη
#include <stdio.h>

int main (void)
{
	int  u, v, temp;

	printf("Δώσε τους δύο ακεραίους: \n");
	scanf("%i %i",&u,&v);
	while (v!=0){
		temp = u%v;
		u = v;
		v = temp;
	}
	printf("Ο μέγιστος κοινός διαιρέτης είναι %i \n",u);
	return 0;
}

/* gcc lecture03_4.c -o 03_4 */
