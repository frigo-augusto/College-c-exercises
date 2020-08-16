#include <stdio.h>
int main()
{
    int value[9999], smallervalue = 0, count = 0, restrictsum, denaverage, totalsum;
    for (int i = 0; i != - 1; i++)
    {
        printf ("enter a int value");
        scanf ("%d", &value[i]);
        count++;
        i = -2;
    }
    for (int i = 0; i <= count; i++)
    {
        if (value[i] > 100 && value[i] < 1000)
        {
            restrictsum += value[i];
            denaverage++;

            if (value[i] < smallervalue)
            {
                smallervalue = value[i];
            }
        }
        totalsum += value[i]
    }
    printf ("%d %d %d %d", smallervalue, restrictsum, restrictsum/denaverage, totalsum);
}