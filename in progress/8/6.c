#include <stdio.h>
int main()
{
    float soma = 0;
    for (int i = 1; i <= 10000; i++)
    {
        soma += (70 - i)/(7 + (7*i));
    }
    printf ("%f", soma);
}