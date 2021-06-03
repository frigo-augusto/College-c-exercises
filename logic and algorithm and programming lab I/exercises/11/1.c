#include <stdio.h>
int main()
{
    int number;
    int aux = 0, sum_even_number = 0, quant_even_number = 0, sum_odd_number = 0, quant_odd_number = 0;
    printf ("program to calculate the average of 200 odd and even numbers inserted\n");
    while (aux < 200)
    {
        printf ("enter the number\n");
        scanf ("%d", &number);
        if (number % 2 == 0)
        {
            sum_even_number += number;
            quant_even_number++;
        }
        else if (number % 2 == 1)
        {
            sum_odd_number += number;
            quant_odd_number++;
        }
        aux++;
    }
    printf ("the average of odd numbers is %d, the average of even numbers is %d", sum_odd_number/quant_odd_number, sum_even_number/quant_even_number);
    printf ("\nend of program execution");
    return 0;

}