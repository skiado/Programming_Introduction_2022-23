//Άσκηση 2
# include <stdio.h>
# include <math.h>

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

struct point input_point(){
	struct point p;
	printf("Δώσε τις συντεταγμένες του σημείου (x,y,z):");
	scanf("%lf,%lf,%lf",&p.x,&p.y,&p.z);
	return p;
}

int main(){
	struct point a, b;
	double distance;
	
	a = input_point();
	b = input_point();
	distance = dist(a,b);
	printf("Η απόσταση των σημείων είναι: %lf \n", distance);
	return 0;
}

/* gcc lab08_2.c -o 08_02 -lm */
