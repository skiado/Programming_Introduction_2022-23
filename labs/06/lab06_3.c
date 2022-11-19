//Άσκηση 3
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 200
#define RAND_LIMIT 75

int main(){
	int m[ARRAY_LEN];
	int min = RAND_LIMIT, max = 0;
	double m_o;
	
	for(int i = 0; i < ARRAY_LEN; i++){
		m[i] = rand() % RAND_LIMIT;
	}
	for(int i = 0; i < ARRAY_LEN; i++){
		if (m[i] < min){
			min = m[i]  ;
		}
		if (m[i] > max){
			max = m[i];
		}
		m_o += m[i];
	}
	m_o /= ARRAY_LEN;
	printf("min = %i \nmax = %i\nμέσος όρος = %.3lf\n",min,max,m_o);
	return 0;
}

/* gcc lab05_3.c -o lab05_3 */
