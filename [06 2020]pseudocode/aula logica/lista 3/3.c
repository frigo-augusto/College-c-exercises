#include <stdio.h>
int main()
{
    float numero[9];
    int aux;
    for (aux = 0; aux < 10; aux++)
    {
        printf ("digite um numero");
        scanf ("%f", &numero[aux]);
    }
    for (aux = 0; aux < 10; aux++)
    {
        printf ("\n%f\n", numero[aux]/2);
    }
}