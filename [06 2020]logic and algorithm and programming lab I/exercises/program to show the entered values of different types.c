#include <stdio.h>
int main (){
    int int1;
    float f1, f2;
    char c1[50];
    printf ("\nprogram to show the entered values of different types");
    printf ("\nenter a int value, 2 float and 1 string, respectively\n");
    scanf ("%d %f %f %s", &int1, &f1, &f2, &c1);
    printf ("\nthe entered values are %d %.2f %.2f %s", int1, f1, f2, c1);
    printf ("\n end of program execution");
    return 0;
}