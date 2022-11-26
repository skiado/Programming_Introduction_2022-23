// Άσκηση 3
# include <stdio.h>

int input_number(){
	int x = 0;
	
	while ( (x < 1) || (x > 20)){
		printf("Δώσε έναν αριθμό από 1 έως 20 : ");
		scanf("%i",&x);
	}
	return x;
}

void array3(int x[],int array_len){
	
	for(int i = 0; i < array_len; i++){
		x[i] *= 3;
	}
}

int main(){
	int n;
	
	n = input_number();
	int a[n+1],a3[n+1];
	
	
	for(int i = 0; i <= n; i++){
		a[i] = i;
		a3[i] = i;
	}
	array3(a3,n+1);
	printf(" Αρχικός    Αρχικός επί 3 \n");
	printf("--------------------------\n");
	for(int i = 0; i <= n; i++){
		printf("  %i            %i \n",a[i],a3[i]);
	}
	return 0;
}
/* gcc lab07_03.c -o 07_03 */
