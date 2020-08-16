#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool a1 = 0, a2 = 0;
    int d1, m1, d2, m2;
    printf ("digite o dia e o mes do aniversario 1");
    scanf ("%d %d", &d1, &m1);
    printf ("digite o dia e o mes do aniversario 2");
    scanf ("%d %d", &d2, &m2);
    if (m2 > m1)
    {
        a2 = 1;
    }
    else if (m1 > m2)
    {
        a1 = 1;
    }
    else
    {
        if (d1 > d2)
        {
            a1 = 1;
        }
        else if (d2 > d1)
        {
            a2 = 1;
        }
    }
    if (a1 == 1)
    {
        printf ("a primeira entrada faz aniversario antes");
    }
    else if (a2 == 1)
    {
        printf ("a segunda entrada faz aniversario antes");
    }
    else
    {
        printf ("ambos fazem aniversario na mesma data.");
    }
}