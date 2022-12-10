// Binary file
# include <stdio.h>

int main(){
	double num[5],n;
	FILE *in, *out;
	
	for(int i = 1;i < 6;i++){
		num[i-1] = i * 3.275;
		printf("%lf, ",num[i-1]);
	}
	printf("\n");
	out =fopen("data3.dat","wb");
	
	for(int i = 1;i < 6;i++){
		fprintf(out,"%lf ",num[i-1]);
	}
	fclose(out);
	
	in = fopen("data3.dat","rb");
	for(int i = 1;i < 6;i++){
		fscanf(out,"%lf ",&n);
		printf("%lf \n",n);
	}
	return 0;
}

/* gcc lecture10_03a.c -o 10_03a  */
