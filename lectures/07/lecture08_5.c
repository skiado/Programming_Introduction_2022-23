//Πρόγραμμα παρουσίασης πίνακα με structures
#include <stdio.h>

struct time {
	int hour;
	int minutes;
	int seconds;
};

int main (void){
	struct time timeUpdate (struct time now);
	struct time testTimes[5] = { { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },
								{ 23, 59, 59 }, { 19, 12, 27 }};
	
	for (int i = 0; i < 5; i++ ) {
		printf ("Time is %.2i:%.2i:%.2i", testTimes[i].hour,testTimes[i].minutes, testTimes[i].seconds);
		testTimes[i] = timeUpdate (testTimes[i]);
		printf (" ...ένα δευτερόλεπτο αργότερα είναι %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
	}
	return 0;
}

struct time timeUpdate (struct time now){
	now.seconds++ ;
	
	if ( now.seconds == 60 ) { //επόμενο λεπτό
		now.seconds = 0;
		now.minutes++ ;
		
		if ( now.minutes == 60 ) { // επόμενη ώρα
			now.minutes = 0;
			now.hour++ ;

			if ( now.hour == 24 ) { // μεσάνυκτα
				now.hour = 0;
			}
		}
	}
	return now;
}

/* gcc lecture08_5.c -o 08_05  */
