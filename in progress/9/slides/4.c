#include <stdio.h>
#include <math.h>
int main()
{
    int numero, total;
    printf ("digite um numero");
    scanf ("%d", &numero);
    int vetor[numero/2 + 1];
    for (int k = 1; k <=(numero/2 + 1) ; k++)
    {
        vetor[k] = k;
        printf ("%d", vetor[3]);
    }
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 1; j <= numero; j+= 2)
        {
            total = vetor[i]
        }
    }
}