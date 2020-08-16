#include <stdio.h>
int main()
{
    int soma = 1;
    //sequencia: 1/1 + 3/2 + 5/3 ... 99/50
    for (int i = 1; i <= 49; i++)
    {
        soma += (1 + 2*i)/(1 + i);
    }
    printf ("%d", soma);
}