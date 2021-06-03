#include <stdio.h>
#include <stdbool.h>
int main()
{
    int numero, perf;
    printf ("digite um numero");
    scanf ("%d", &numero);
    for (int i = 1; i <= numero; i++)
    {
        if (i * ( i+ 1 ) * ( i + 2) == numero)
        {
            perf = true;
        }
    }
    if (perf == true)
    {
        printf ("o numero eh perfeito");
    }
    else
    {
        printf ("o numero nao eh perfeito");
    }
    return 0;
}