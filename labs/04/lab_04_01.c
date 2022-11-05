#include <stdio.h>

int main (void){
	long int parag = 1;
	long int tri;
	int i,n;
	for(i=2; i<13; i++){
		parag = i * parag;	
	}
	printf("%*d! =  %ld \n",2,i-1,parag);
	n = 1;
	while (tri < parag){
		tri = (n*(n+1))/2;
		n++;
	}
	printf("Τριγωνικός(%d) =  %ld \n",n,tri);
	return 0;
}

/* gcc lab_04_01.c -o 04_01*/
