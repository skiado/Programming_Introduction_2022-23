//Άσκηση 2
# include <stdio.h>

long int cube(int x){
	return x*x*x;
}


int input_number(){
	int x = -1;
	
	while ( (x < 0) || (x > 100)){
		printf("Δώσε έναν αριθμό από 0 έως 100 : ");
		scanf("%i",&x);
	}
	return x;
}

int main(){
	int n;
	long int n3;
	
	n = input_number();
	
	n3 = cube(n);
	printf(" n = %i  n^3 = %li \n",n,n3);
	return 0;
}

/* gcc lab07_02.c -o 07_02  */
