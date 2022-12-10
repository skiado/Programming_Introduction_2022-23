//Άσκηση 1
# include <stdio.h>

int main(){
	int i = 154;
	double d = 45.328;
	char c = 'C';
	char *g_s = "Ιόνιο Πανεπιστήμιο\0";
	
	printf("Η τιμή %i είναι αποθηκευμένη στη θέση %p\n",i,&i);
	printf("Η τιμή %lf είναι αποθηκευμένη στη θέση %p\n",d,&d);
	printf("Ο χαρακτήρας %c είναι αποθηκευμένος στη θέση %p\n",c,&c);
	printf("Το string %s είναι αποθηκευμένο στη θέση %p\n",g_s,g_s);
	return 0;
}

/* gcc lab09_1.c -o lab09_1  */
