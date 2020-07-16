#include <stdio.h>
int main(){
    //this program considers a life with 80 years
    float age, total_days, v_days, r_days;
    printf ("\nprogram to calculate how many days are left in your life");
    printf ("\nenter your age\n");
    scanf ("%f", &age);
    total_days = 80*365;
    v_days = age * 365;
    r_days = total_days - v_days;
    printf ("\nyou have %f days left", r_days);
    printf ("\nend of program execution");
    return 0;
}