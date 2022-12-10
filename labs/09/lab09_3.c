//Άσκηση 3
# include <stdio.h>

void print_addr(int x){
	printf("Η τιμή %i στη συνάρτηση print_addr είναι αποθηκευμένη στη θέση %p\n",x,&x);
}

void print_addr_ptr(int *x){
	printf("Η τιμή %i στη συνάρτηση print_addr_ptr είναι αποθηκευμένη στη θέση %p\n",*x,x);
}

int main(){
	int a = 15;
	
	printf("Η τιμή %i είναι αποθηκευμένη στη θέση %p\n",a,&a);
	print_addr(a);
	print_addr_ptr(&a);
	return 0;
}

/* gcc lab09_3.c -o lab09_3  */
