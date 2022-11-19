//Άσκηση 1
#include <stdio.h>

int main(){
	int m[10];
	
	for(int i = 0; i < 10; i++){
		scanf("%i",&m[i]);
	}
	for(int i = 9; i >= 0; i--){
		printf("%i -> %i \n",i,m[i]);
	}

	return 0;
}
/* gcc lab05_2.c -o lab05_2 */

