// Πρόγραμμα πρόσθεσης πινάκων 2-d
#include <stdio.h>

#define ROWS 5
#define COlS 5

int main (void){
	int a[ROWS][COlS],b[ROWS][COlS],sum[ROWS][COlS];
	
	// αρχικοποίηση των δύο πινάκων με κάποιες τιμές
	for(int row=0; row<ROWS; row++){       
		for(int col=0; col<COlS; col++){
			a[row][col] = col+(row*2);
			b[row][col] = (col+1)*(row+2);
		}
	}
	// εκτύπωση των πινάκων
	printf(" Πίνακας Α \n");
	for(int row=0; row<ROWS; row++){       
		for(int col=0; col<COlS; col++){
			printf("%3d ",a[row][col]);
		}
		printf("\n");
	}
	printf(" Πίνακας B \n");
	for(int row=0; row<ROWS; row++){       
		for(int col=0; col<COlS; col++){
			printf("%3d ",b[row][col]);
		}
		printf("\n");
	}
	// πρόσθεση των πινάκων a και b
	for(int row=0; row<ROWS; row++){       
		for(int col=0; col<COlS; col++){
			sum[row][col] = a[row][col]+b[row][col];
		}
	}
	//εκτύπωση του αθροίσματος
	printf(" Πίνακας Α + B \n");
	for(int row=0; row<ROWS; row++){       
		for(int col=0; col<COlS; col++){
			printf("%3d ",sum[row][col]);
		}
		printf("\n");
	}
	return 0;
}

/* gcc lecture05_6.c -o 05_6 */
