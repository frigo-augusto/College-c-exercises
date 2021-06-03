#include <stdio.h>
#include <stdbool.h>
int main()
{
    int count = 1, numero;
    bool qpf;
    printf ("digite um numero inteiro positivo");
    scanf ("%d", &numero);
    while (count =! numero - 2)
    {
        if (count * (count + 1) * (count + 2) == numero)
        {
            qpf = true;
        }
        count++;
    }
    if (qpf == true)
    {
        printf ("o numero eh trinagular");
    }
}