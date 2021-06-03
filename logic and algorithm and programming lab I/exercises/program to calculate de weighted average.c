#include <stdio.h>
int main (){
    float w1, w2, v1, v2, sweight;
    printf ("\n program to calculate de weighted average");
    printf ("\n enter the value 1 and the weight 1 \n");
    scanf ("%f %f", &v1, &w1);
    printf ("\n enter the value 2 and the weight 2 \n");
    scanf ("%f %f", &v2, &w2);
    sweight = w1 + w2;
    printf ("\n the average is %.2f", (v1*w1 + v2*w2)/sweight);
    printf ("\nend of program execution");
    return 0;
}