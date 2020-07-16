#include <stdio.h>
int main()
{
    int rhouse, rground;
    float pi, ahouse, aground, freespace, freepercentage;
    pi = 3.1416;
    printf ("\ncalculator of free percentage and space in a ground (using circular models)");
    printf ("\nenter the radius of the house and the ground, respectively");
    scanf ("%d %d", &rhouse, &rground);
    //I decided don't include math.h because it's a simple operation
    ahouse = pi * rhouse * rhouse;
    aground = pi * rground * rground;
    freespace = aground - ahouse;
    freepercentage = 100 - (ahouse/aground*100);
    printf ("your house has %.2f m^2, your ground has %.2f m^2, the free space is %.2f m^2, the free percentage is %.2f per cent", ahouse, aground, freespace, freepercentage);
    printf ("\n end of program execution");
    return 0;
}
    