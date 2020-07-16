#include <stdio.h>
int main ()
{
    int notes_50, notes_20, notes_10, notes_5, notes_2, notes_1, change, pay, purchase;
    printf ("change calculator");
    printf ("enter the paid value and the purchase value");
    scanf ("%d %d", &pay, &purchase);
    change = pay - purchase;
    notes_50 = change/50;
    notes_20 = (change - notes_50 * 50)/20;
    notes_10 = (change - notes_50 * 50 - notes_20 * 20)/10;
    notes_5 = (change - notes_50 * 50 - notes_20 * 20 - notes_10 * 10)/5;
    notes_2 = (change - notes_50 * 50 - notes_20 * 20 - notes_10 * 10 - notes_5 * 5)/2;
    notes_1 = (change - notes_50 * 50 - notes_20 * 20 - notes_10 * 10 - notes_5 * 5 - notes_2*2);
    printf ("the change is %d notes of 50, %d notes of 20, %d notes of 10, %d notes of 5, %d notes of 2 e %d notes of 1", notes_50, notes_20, notes_10, notes_5, notes_2, notes_1);
    printf ("end of program execution");
    return 0;
}