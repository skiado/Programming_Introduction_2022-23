//Άσκηση 1
#include <stdio.h>

int main(){
	int m[10];
	int s = 0;
	double m_o;
	
	for(int i = 0; i < 10; i++){
		scanf("%i",&m[i]);
	}
	for(int i = 0; i < 10; i++){
		s += m[i];
	}
	m_o = (float) s / 10;
	printf("%.2f\n",m_o);
	return 0;
}
/* gcc lab05_1.c -o lab05_1 */

