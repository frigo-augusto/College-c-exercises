#include <stdio.h>
int main ()
{
    //base salary is the amount pay for a day with 8 hours of work. extra hour is the double of base salary.
    float hours, base_salary, extra_hours, value_hour, value_extra_hour;
    printf ("liquid salary calculator");
    printf ("\nenter the number of worked hours, base salary and the number of extra hours\n");
    scanf ("%f %f %f", &hours, &base_salary, &extra_hours);
    value_hour = base_salary * 1/8;
    value_extra_hour = base_salary * 1/4;
    printf ("\n the liquid salary is %.2f", value_hour * hours + value_extra_hour * extra_hours);
    printf ("\nend of program execution");
    return 0;
}