#include <stdio.h>

int dividers(int n1)
{
    int counter = 0;
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int number, counter;
    printf ("dividers calculator. Enter a number.");
    scanf ("%d", &number);
    counter = dividers(number);
    printf ("the number of dividers is %d", counter);
}