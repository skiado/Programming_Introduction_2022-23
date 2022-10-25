#include <stdio.h> 
int main()
{
    int days, years, weeks;

    days = 1854; 

    // Μετατροπή ημερών σε έτη
    years = days/365; 
    // Μετατροπή των υπόλοιπων ημερών σε εβδομάδες
    weeks = (days % 365)/7;
    
    days = days- ((years*365) + (weeks*7));

    printf("Έτη: %d\n", years);
    printf("Εβδομάδες: %d\n", weeks);
    printf("Ημέρες: %d \n", days);

    return 0;
}

/* gcc lab02_3.c -o lab02_3 */
