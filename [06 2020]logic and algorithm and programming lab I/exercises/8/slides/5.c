#include <stdio.h>
#include <stdbool.h>
int main()
{   int valor = 0;
    bool control = 0;
    printf ("digite um valor");
    scanf ("%d", &valor);
    printf ("\ndivisor:1");
    printf ("\ndivisor:%d", valor);
    for (int i = 2; i <=(valor - 1); i++)
    {
        if (valor % i == 0)
        {
            printf ("\ndivisor:%d", i);
            control = 1;
        }
    }
    if (control == 0)
    {
        printf ("\no numero eh primo");
    }
}