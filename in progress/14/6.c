#include <stdio.h>

int sucsum(n1, n2)
{
    int prod = 0;
    for (int i = 0 ; i < n2; i++)
    {
        prod += n1;
    }
    return prod;
}

int main()
{
    int n1, n2, prod;
    printf ("enter the two numbers to multiplicate");
    scanf ("%d %d", &n1, &n2);
    prod = sucsum(n1, n2);
    printf ("%d", prod);
}