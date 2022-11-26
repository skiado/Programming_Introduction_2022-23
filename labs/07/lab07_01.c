//Άσκηση 1
# include <stdio.h>

void cube(int x){
	long int x3;
	
	x3 = x*x*x;
	printf(" n = %i  n^3 = %li \n",x,x3);
}

int main(){
	int n = -1;
	
	while ( (n < 0) || (n > 100)){
		printf("Δώσε έναν αριθμό από 0 έως 100 : ");
		scanf("%i",&n);
	}
	cube(n);
	return 0;
}

/* gcc lab07_01.c -o 07_01  */
