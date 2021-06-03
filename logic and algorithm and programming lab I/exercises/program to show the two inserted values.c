#include <stdio.h>
int main ()
{
    float number1,number2;
    printf ("\nprogram to show the two inserted values");
    printf ("\ntype the two wanted values\n");
    scanf ("%f %f", &number1, &number2);
    printf ("\nthe values are %.2f, %.2f", number1, number2);
    printf ("\nend of program execution");
    return 0;
}