#include <stdio.h>
int main()
{
    int a, b;
    printf ("digite dois valores");
    scanf ("%d %d", &a, &b);
    if (a + b > 10)
    {
        printf ("%d", a + b);
    }
    system ("pause");
    return 0;
}