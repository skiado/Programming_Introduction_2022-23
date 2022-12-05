// Απλή χρήση pointers
# include <stdio.h>

int main(){
	int x, count = 10;
	int *int_pointer;
	
	int_pointer = &count;
	x = *int_pointer;
	printf("count = %i, x = %i \n",count,x);
	return 0;
}

/* gcc lecture09_01.c -o 09_01  */
