#include <stdio.h>
int main()
{
    float coin[5], value[5], total;
    int i, j;
    printf ("money calculator");
    //in the exercise, the use of vectors and loops wasn't really necessary, but it saved work
    total = 0;
    coin[0] = 0.01;
    coin[1] = 0.05;
    coin[2] = 0.1;
    coin[3] = 0.25;
    coin[4] = 0.5;
    coin[5] = 1;
    printf ("enter your coins of 1, 5, 10, 25, 50 cents and 1 dol, respectively");
    for (i=0; i<=5; i++)
    {
    scanf ("%f", &value[i]);
    }
    for (j=0; j<=5; j++)
    {
    total = total + (coin[j] * value[j]);
    }
    printf ("you have s %.2f", total);
    printf ("\nend of program execution");
    return 0;
}