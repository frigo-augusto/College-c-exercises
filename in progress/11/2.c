#include <stdio.h>
#include <math.h>
int main()
{
    int start_interval, end_interval, incord, aux;
    printf ("program to print a table with a conversion celsius-farenheit");
    printf ("\nEnter the interval of value that you want to convert(two enters)\n");
    scanf ("%d %d", &start_interval, &end_interval);
    printf ("Enter the increment or decrement of the interval, if decrement, use negative numbers");
    scanf ("%d", &incord);
    aux = floor ((end_interval - start_interval)/incord);
    while (aux > 0)
    {
        printf ("\n %.2f",(start_interval)* 1.8 + 32);
        aux--;
        start_interval+= incord;
    }
    printf ("\nend of program execution");
}