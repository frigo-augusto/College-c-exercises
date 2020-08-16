#include <stdio.h>
int main()
{
    int numero[1000], totaldiv = 0;
    for (int i = 1; i <= 1000; i++)
    {
        printf ("digite os numeros desejados. condicao de parada: 0\n");
        scanf ("%d", &numero[i]);
        if (numero[i] == 0)
        {
            goto stop;
        }
    }
    stop:
    for (int i = 1; i <= 1000; i++)
    {
        if (numero[i] == 0)
        {
            goto stop2;
        }
        for (int j = 1; j <= numero[i] - 1; j++)
        {
            if (numero[i] % j == 0)
            {
                totaldiv += j;
            }
        }
        if (totaldiv == numero[i])
            {
                printf ("\n%d eh numero perfeito", numero[i]);
            }
        totaldiv = 0;
    }
    stop2:
    printf ("\nfim do programa");
    return 0;

}