//Γράψιμο - Διάβασμα string
# include <stdio.h>

int main(){
	FILE *in, *out;
	char str[100];
	
	
	in = fopen("data2a.txt","r");
	while (1){
		if (feof(in)){
			break;
		}
		fgets(str,100,in);
		printf("%s",str);	
	}
	fclose(in);
	return 0;
}

/* gcc lecture10_04.c -o 10_04  */
