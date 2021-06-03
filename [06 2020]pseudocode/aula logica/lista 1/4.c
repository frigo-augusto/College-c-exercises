#include <stdio.h>
int main ()
{
    float a, b;
    printf ("digite dois numeros");
    scanf ("%f %f", &a, &b);
    printf ("%f %f", floor(a), floor(b));
    system ("pause");
    return 0;
}