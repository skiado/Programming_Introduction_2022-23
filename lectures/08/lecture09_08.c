// Πρόγραμμα με pointers σε functions
#include <stdio.h>

void test (int *int_pointer){
	*int_pointer = 100;
}

int main (void){
	int i = 50, *p = &i;
	printf ("Πριν την κλίση της συνάρτησης test: i = %i\n", i);
	test (p);
	printf ("Μετά την κλίση της συνάρτησης test: i = %i\n", i);
	return 0;
}

/* gcc lecture09_08.c -o 09_08  */
