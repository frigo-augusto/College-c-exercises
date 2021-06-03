#include <stdio.h>
int main()
{
    int x = 432, y = 468, coordx, coordy;
    printf ("\ndigite as coordenadas x e y da bola\n");
    scanf ("%d %d", &coordx, &coordy);
    if (coordx <= x && coordx >= 0 && coordy <=y && coordy >= 0)
    {
        printf ("bola dentro");
    }
    else 
    {
        printf ("bola fora");
    }
    return 0;
}