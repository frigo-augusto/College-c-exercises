#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a[10], b[20], c[10];
    bool aut = 0;;
    for (int i = 0; i < 10; i++)
    {
        printf ("enter the vet a values");
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        printf ("enter the vet b values");
        scanf ("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (a[i] == b[j])
            {
                for (int k = 0; k < 10; k++)
                {
                    if (c[k] == a[i])
                    {
                        aut = 1;
                    }
                }
                if (aut == 1)
                {
                    c[i] = a[i];
                }
            }
            aut = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf ("%d\n", c[i]);
    }
}