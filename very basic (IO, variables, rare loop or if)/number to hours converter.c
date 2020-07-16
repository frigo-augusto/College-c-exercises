#include <stdio.h>
#include <math.h>
int main()
{
    int seconds, minutes, seconds_1;
    float hours, seconds_2;
    printf ("\nnumber to hours converter");
    printf ("\nenter the number of seconds\n");
    scanf ("%d", &seconds);
    minutes = seconds % 60;
    seconds_1 = minutes % 60;
    seconds_2 = seconds;
    hours = seconds_2 / 3600;
    hours = floor(hours);
    printf ("\n%.2f seconds equals to %.2f hours, %d minutes e %d seconds", seconds_2, hours, minutes, seconds_1);
    printf ("end of program execution");
    return 0;
}