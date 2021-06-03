#include <stdio.h>
#include <string.h>
int main()
{
    float total, preco;
    char dia[2], musica[2];
    int bmusica1 = 1, desconto[2];
    for (int i = 0; i < 3; i++)
    {
        desconto[i] = 1;
    }
    printf ("\ndigite o valor da entrada\n");
    scanf ("%f", &preco);
    printf ("\ndigite o dia da semana\n");
    scanf ("%s", &dia);
    printf ("\nha musica ao vivo? s/n");
    scanf ("%s", &musica);
    
    total = preco;
    desconto[0] = strcmp("d", dia);
    desconto[1] = strcmp("s", dia);
    desconto[2] = strcmp("t", dia);
    printf ("%s", musica);
    bmusica1 = strcmp("s", musica);
    if (bmusica1 == 0)
    {
        total= total + 0.15*preco;
    }
    for (int i = 0; i < 3; i++)
    {
        if (desconto[i] == 0)
        {
            total-= preco * 0.25;
        }
    }
    printf ("\no preco total eh %f\n", total);
    
}