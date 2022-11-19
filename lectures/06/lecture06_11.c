// Πρόγραμμα που δείχνει τη διαφορά των static μεταβλητών
#include <stdio.h>

void auto_static (void){
	int autoVar = 1;
	static int staticVar = 1;
	
	printf ("automatic = %i, static = %i\n", autoVar,staticVar);
	autoVar++;
	staticVar++;
}

int main (void){
	for (int i = 0; i < 5; i++ ){
		auto_static ();
	}
	return 0;
}

/* gcc lecture06_11.c -o 06_11  */
