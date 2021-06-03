#include <stdio.h>
int main ()
{
    int a, b;
    printf ("digite dois numeros");
    scanf ("%d %d", &a, &b);
    if (a + b > 20)
    {
        printf ("%d", a + b + 8)
    }
    else
    {
        printf ("%d", a + b - 5);
    }
    system ("pause");
    return 0;
}