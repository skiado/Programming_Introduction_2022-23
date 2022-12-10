//Διάβασμα γράψιμο structure
# include <stdio.h>

struct student{
	char name[40];
	int id;
};

int main(){
	FILE *in, *out;
	struct student s_w[5],s_r[5];
	
	out = fopen("data5.dat","wb");
	for(int i = 0;i < 5;i++){
		printf("Δώσε όνομα: ");
		scanf("%s",s_w[i].name);
		printf("Δώσε id: ");
		scanf("%i",&s_w[i].id);
	}
	fwrite(s_w,sizeof(s_w[0]),5,out);
	fclose(out);
	in = fopen("data5.dat","rb");
	fread(s_r,sizeof(s_r[0]),5,in);
	fclose(in);
	for(int i = 0;i < 5;i++){
		printf("Όνομα : %-10s  id : %5i \n",s_r[i].name,s_r[i].id);
	}
	return 0;
}

/* gcc lecture10_05.c -o 10_05  */
