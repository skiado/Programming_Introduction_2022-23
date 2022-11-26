// Άσκηση 4
# include <stdio.h>

int input_number(){
	int x = 0;
	
	while ( (x < 1) || (x > 100)){
		printf("Δώσε έναν αριθμό από 1 έως 100 : ");
		scanf("%i",&x);
	}
	return x;
}

double series1(int x){
	double s = 0;
	for(int i = 1; i <= x; i++){
		s += 1.0/i;
	}
	return s;
}

double series2(int x){

	if (x == 1){
		return 1;
	}
	else{
		return (1.0/x) + series2(x-1);;
	}
}

int main(){
	int n;
	
	n = input_number();
	double s1, s2;
	
	s1 = series1(n);
	s2 = series2(n);
	printf("Τιμή απευθείας υπολογισμού = %.3lf \nΤιμή υπολογισμού με ανάδραση = %.3lf \n",s1,s2);
	return 0;
}
/* gcc lab07_04.c -o 07_04 */
