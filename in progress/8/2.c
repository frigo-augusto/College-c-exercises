#include <stdio.h>
int main()
{
    int valor = 0, div = 0, fat = 1, soma = 0;
    for (int i=0; i < 10; i++)
    {
        printf ("digite um valor");
        scanf ("%d", &valor);
        if (valor % 2 == 0)
        {
            for(int j = 1; j <= valor; j++)
            {
                if (valor % j == 0)
                {
                    div++;
                }
            }
            printf ("%d", div);
        }
        else if (valor % 2 == 1 && valor < 10 && valor > 0)
        {
            for (int j = 1; j <= valor; j++)
            {
                fat *= j;
            }
            printf ("%d", fat);
        }
        else if (valor % 2 == 1 && valor >= 10)
        {
            
            for (int j = 1; j <= valor; j++)
            {
                soma += j;
            }
            printf ("%d", soma);
        }
        valor = 0;
        div = 0;
        fat = 1;
        soma = 0;
    }
}