//Άσκηση 1
# include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time normalize(struct time t){
	if (t.seconds > 59){
		t.minutes += t.seconds / 60;
		t.seconds = t.seconds % 60;
	}
	if (t.minutes > 59){
		t.hours += t.minutes / 60;
		t.minutes = t.minutes % 60;
	}
	return t;
}

int main(){
	struct time t1,t2,t_s;
	
	printf("Δώσε τα στοιχεία του 1ου χρονικού διαστήματος (h,m,s): ");
	scanf("%i,%i,%i",&t1.hours,&t1.minutes,&t1.seconds);
	printf("Δώσε τα στοιχεία του 2ου χρονικού διαστήματος (h,m,s): ");
	scanf("%i,%i,%i",&t2.hours,&t2.minutes,&t2.seconds);
	
	t_s.hours = t1.hours + t2.hours;
	t_s.minutes = t1.minutes + t2.minutes;
	t_s.seconds = t1.seconds + t2.seconds;
	t_s = normalize(t_s);
	
	printf("Το συνολικό χρονικό διάστημα είναι: %i ώρες, %i λεπτά και %i δευτερόλεπτα.\n",t_s.hours,t_s.minutes,t_s.seconds);
		
	return 0;
}

/* gcc lab08_1.c -o 08_01  */
