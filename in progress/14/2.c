#include <stdio.h>
#include <stdbool.h>

bool isodd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int number;
    bool isodd1;
    printf ("enter a number. If even, return 0, if odd, return 1.");
    scanf ("%d", &number);
    isodd1 = isodd(number);
    printf ("\n%d", isodd1);
}