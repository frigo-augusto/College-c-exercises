#include <stdio.h>
int main()
{
    float bc, wc, bt, wt, ac, at, freespace, percentage;
    printf ("\noccupation and percentage of house/ground calculator");
    printf ("\nenter the base and the width of your house\n");
    scanf ("%f %f", &bc, &wc);
    printf ("\nenter the base and the width of your ground\n");
    scanf ("%f %f", &bt, &wt);
    ac = bc * wc;
    at = bt * wt;
    freespace = at - ac;
    percentage = (ac/at*100);
    printf ("\nthe ground has %.2f m^2 free and %.2f per cent occupied\n", freespace, percentage);
    printf ("\n end of program execution");
    return 0;
}