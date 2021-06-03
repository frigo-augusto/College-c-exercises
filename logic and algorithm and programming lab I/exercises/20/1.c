#include <stdio.h>

int main()
{

    int a[100], b[100];
    for (int i = 0; i < 5; i++)
    {
        printf ("enter the number");
        scanf ("%d", &a[i]);
        if (a[i] <= 0)
        {
            b[i] = 0;
        }
        else
        {
            b[i] = a[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf ("%d\n", b[i]);
    }

}