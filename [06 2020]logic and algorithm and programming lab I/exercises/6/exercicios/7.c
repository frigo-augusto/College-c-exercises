#include <stdio.h>
#include <string.h>
int main()
{
    char value[1];
    int base, altura, basemen, basemai, area, aux, auxq = 1, auxt = 1, auxr = 1, auxp = 1;
    printf ("digite o char desejado");
    scanf ("%s", &value);
    auxp = strcmp(value, "p");
    if (auxp == 0)
    {
        printf ("digite as bases maior, menor e altura do trapezio");
        scanf ("%d %d %d", &basemen, &basemai, &altura);
    }
    else
    {
    printf ("digite a base e a altura da figura");
    scanf ("%d %d", &base, &altura);   
    }
    
    auxq = strcmp(value, "q");
    auxt = strcmp(value, "t");
    auxp = strcmp(value, "p");
    auxr = strcmp(value, "r");
    if (auxq == 0)
    {
        aux = 1;
    }
    else if (auxt ==0)
    {
        aux = 2;
    }
    else if (auxr == 0)
    {
        aux = 3;
    }
    else if (auxp == 0)
    {
        aux = 4;
    }
    switch(aux)
    {
    case 1:
    area = base * altura;
    printf ("quadrado %d", area);
    break;

    case 2:
    area = base * altura/2;
    printf ("triangulo %d", area);
    break;

    case 3:
    area = base * altura;
    printf ("retangulo %d", area);
    break;

    case 4:
    area = (basemai+basemen) * altura / 2;
    printf ("trapezio %d", area);
    break;

    default:
    printf ("entrada invalida!");
    break;
    }
     
}