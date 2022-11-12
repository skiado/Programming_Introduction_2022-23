// Πρόγραμμα εμφάνισης του είδους ενός τριγώνου ως προς τις πλευρές του
#include <stdio.h>

int main() {
	double a,b,c;
	
	printf("Δώσε τις πλευρές του τριγώνου:");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if (((a+b) > c) && ((b+c) > a) && ((c+a) > b)){
		if ((a == b) && (b == c)){
			printf("Ισόπλευρο τρίγωνο.\n");
		}
		else if ((a == b) || (b == c) || (c == a)){
			printf("Ισοσκελές τρίγωνο. \n");
		}
		else {
			printf("Σκαληνό τρίγωνο. \n");
		}
	}
	else {
		printf("Οι πλευρές δεν αντιστοιχούν σε τρίγωνο.\n");
	}
	return 0;
}

/* gcc lab04_4.c -o lab04_4 */
