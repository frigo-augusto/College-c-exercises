#include <stdio.h>
int main()
{
    int numero = 0, counter = 0, maior = 0, menor = 0, media = 0;
    for (int i = 0; i < 50; i++)
    {
        printf ("digite um numero (zero not allowed)");
        scanf ("%d", &numero);
        if (menor == 0)
        {
            menor = numero;
        }
        counter = counter + numero;
        if (numero > maior)
        {
            maior = numero;
        }
        else if (numero < menor)
        {
            menor = numero;
        }
    }
    media = counter/50;
    printf ("o maior eh %d, o menor eh %d, a media eh %d", maior, menor, media);
    return 0;
}