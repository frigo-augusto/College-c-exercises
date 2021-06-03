#include <stdio.h>
int main()
{
    int distancia, litros;
    float preco;
    printf ("digite a distancia a percorrer");
    scanf ("%d", &distancia);
    litros = ceil(distancia/10);
    if(litros > 45)
    {
        preco = litros * 2.3;
    }
    else
    {
        preco = litros * 2.5;
    }
    printf ("%.2f", preco);
    return 0;
}