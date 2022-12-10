//Άσκηση 2
# include <stdio.h>

void swap(int *a, int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x,y;
	
	printf("x = ");
	scanf("%i",&x);
	printf("y = ");
	scanf("%i",&y);
	printf("x = %i, y = %i\n",x,y);
	swap(&x,&y);
	printf("Μετά την εκτέλεση της swap\nx = %i, y = %i\n",x,y);
	return 0;
}

/* gcc lab09_2.c -o lab09_2  */
