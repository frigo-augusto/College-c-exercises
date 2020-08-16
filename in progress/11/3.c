#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 0, aux = 0;
    printf ("program that calculates the product of two numbers by means of sucessives sums");
    printf ("\n enter the two numbers");
    scanf ("%d %d", &n1, &n2);
    aux = n1;
    while (n2 > 0)
    {
        n1 = n1 + n1;
        n2--;
    }
    n1 -= aux;
    printf ("the product is %d", n1);
    printf ("\nend of program execution");
}