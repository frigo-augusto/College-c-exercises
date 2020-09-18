#include <stdio.h>

int main()
{
    int vet[5], contneg = 9999, contpos = -9999;
    for (int i = 0; i < 5; i++)
    {
        printf ("enter the number");
        scanf ("%d", &vet[i]);
        if (vet[i] < contneg)
        {
            contneg = vet[i];
        }

        if (vet[i] > contpos)
        {
            contpos = vet[i];
        }
    }
    printf ("%d", contpos - contneg);
}