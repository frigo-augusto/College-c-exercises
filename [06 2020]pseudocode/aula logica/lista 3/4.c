#include <stdio.h>
int main()
{
    int numero;
    printf ("digite um numero");
    scanf ("%d", &numero);
    if (numero % 2 == 1)
    {
        while (numero != 1)
        {
            printf ("\n%d\n", numero);
            numero = numero - 2;
        }
    printf ("\n1");
    }
    else
    {
        numero = numero - 1;
        while (numero != 1)
        {
            printf ("\n%d\n", numero);
            numero = numero - 2;
        }
    printf ("\n1");
    }
    
}