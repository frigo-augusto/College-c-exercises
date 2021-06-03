#include <stdio.h>
int main()
{
    int cont = 0, n1, n2, soma = 0;
    printf ("\n digite dois numeros para o intervalo");
    scanf ("%d %d", &n1, &n2);
    cont = n2 - n1;
    while (cont != 0)
    {
        soma += n2 - cont;
        cont--;
    }
    printf ("\n%d", soma);
}