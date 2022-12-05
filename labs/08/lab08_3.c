//Άσκηση 3
# include <stdio.h>
# include <math.h>
#include <stdlib.h>
#include<time.h>

struct point {
	double x;
	double y;
	double z;
};

double dist(struct point p1,struct point p2){
	double d = 0;
	d = sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2) + pow((p1.z - p2.z),2) );
	return d;
}

struct point rand_point(){
	struct point p;
	
	p.x = (double)rand() / (double) RAND_MAX;
	p.y = (double)rand() / (double) RAND_MAX;
	p.z = (double)rand() / (double) RAND_MAX;
	return p;
}

int main(){
	struct point a[5];
	double f, max_dist = 0;
	int m_a,m_b;
	
	srand(time(0));
	printf("Οι συντεταγμένες των σημείων είναι: \n");
	for(int i = 0; i < 5; i++){
		a[i] = rand_point();
		printf("%lf, %lf, %lf \n",a[i].x,a[i].y,a[i].z);
	}
	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 5; j++){
			f = dist(a[i],a[j]);
			if (f > max_dist ){
				max_dist = f;
				m_a = i;
				m_b = j;
			}
		}
	}
	printf("Τα παρακάτω σημεία έχουν τη μέγιστη ευκλείδια απόσταση d = %lf \n",max_dist);
	printf("%lf, %lf, %lf \n",a[m_a].x,a[m_a].y,a[m_a].z);
	printf("%lf, %lf, %lf \n",a[m_b].x,a[m_b].y,a[m_b].z);
	return 0;
}

/* gcc lab08_3.c -o 08_03 -lm */
