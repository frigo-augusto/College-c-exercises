#include <stdio.h>
#include <math.h>
int main()
{
    float numero[14];
    int i;
    for (i = 0; i < 15; i++)
    {
        printf ("digite um numero");
        scanf ("%f", &numero[i]);
    }
    i = 0;
    for (i = 0; i < 15; i ++)
    {
        printf ("\n%f\n", sqrt(numero[i]));
    }
}  
