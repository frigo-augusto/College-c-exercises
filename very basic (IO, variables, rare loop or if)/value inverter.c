#include <stdio.h>
int main()
{
    int a, b, c;
    printf ("value inverter");
    printf ("\nenter 2 int value\n");
    scanf ("%d %d", &a, &b);
    printf ("\nthe entered value are %d %d", a, b);
    c = a;
    a = b;
    b = c;
    printf ("\nthe inverse of the entered values is %d %d", a, b);
    printf ("\nend of program execution");
}