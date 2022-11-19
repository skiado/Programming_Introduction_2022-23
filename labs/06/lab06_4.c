//Άσκηση 4
#include <stdio.h>

int main(){
	int array_len;
	
	printf("Δώσε τη διάσταση του πίνακα.\n");
	scanf("%i",&array_len);
	
	int m[array_len][array_len];
	
	for(int i = 0; i < array_len; i++){
		for(int j = 0; j < array_len; j++){
			if (i == j){
				m[i][j] = 1;
			}
			else {
				m[i][j] = 0;
			}
		}
	}
	printf("Μοναδιαίος πίνακας %ix%i\n\n",array_len,array_len);
	for(int i = 0; i < array_len; i++){
		for(int j = 0; j < array_len - 1; j++){
			printf("%i , ",m[i][j]);
		}
		printf("%i \n",m[i][array_len-1]);
	}
	return 0;
}
/* gcc lab06_4.c -o lab06_4 */
