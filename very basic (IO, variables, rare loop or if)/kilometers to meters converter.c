#include <stdio.h>
int main()
{
    float km, m;
    printf ("\nkilometers to meters converter");
    printf ("\n enter the value in km/h\n");
    scanf ("%f", &km);
    m = km/3.6;
    printf ("\nthe entered value is %.2f km/h, equivalent to %.2f m/s", km, m);
    printf ("\nend of program execution");
    return 0;
}