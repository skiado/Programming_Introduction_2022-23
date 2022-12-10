//Πρόγραμμα αντιγραφής αρχείου
#include <stdio.h>
	int main (void){
	char inName[64], outName[64];
	FILE *in, *out;
	int c;
	// Ονόματα αρχείων από τον χρήστη
	printf ("Όνομα αρχείου για ανιγραφή: ");
	scanf ("%63s",inName);
	printf ("Όνομα αντίγραφου αρχείου: ");
	scanf ("%63s",outName);
	// Άνοιγμα αρχείων
	if ( (in = fopen (inName, "r")) == NULL ) {
		printf ("Δεν μπορώ να ανοίξω το αρχείο %s για διάβασμα.\n", inName);
		return 1;
	}
	if 	( (out = fopen (outName, "w")) == NULL ) {
		printf ("Δεν μπορώ να ανοίξω το αρχείο %s για γράψιμο.\n", outName);
		return 2;
	}
	// Αντιγραφή in σε out
	while ( (c = fgetc (in)) != EOF ){
		fputc (c, out);
	}
	// Κλείσιμο αρχείων
	fclose (in);
	fclose (out);
	printf ("Το αρχείο αντιγράφτηκε.\n");
	return 0;
}

/* gcc lecture10_02.c -o 10_02  */
