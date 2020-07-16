#include <stdio.h>
int main ()
{
    float validp, blankp, nullp, valid, blank, null, total;
    printf ("percentage of votes calculator");
    printf ("enter the number of valid, blank and null votes, respectively");
    scanf ("%d %d %d", &valid, &blank, &null);
    total = valid + blank + null;
    validp = valid / total * 100;
    blankp = blank / total * 100;
    nullp = null / total * 100;
    printf ("there's %.2f per cent of valid votes,  %.2f per cent of blank and %.2f per cent of null votes", validp, blankp , nullp);
    printf ("end of program execution");
    return 0;
}