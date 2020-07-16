#include <stdio.h>
#define pi 3.141592
int main()
{
    float c, d, circd, circc;
    printf ("program to calculate how many D circumferences fit in C.");
    printf ("\nenter the values C and D, respectively. This values needs to be the diameter of a circumference\n");
    scanf ("%f %f", &c, &d);
    circd = 2 * pi * d / 2;
    circc = 2 * pi * c / 2;
    printf ("\nin c fit %.2f d circumferences", circc / circd);
    printf ("\nend of program execution");
    return 0;
}