#include <stdio.h>
int main()
{
    float base, height, area;
    printf ("\n triangle area calculator");
    printf ("\nenter the base and the height of the triangle");
    scanf ("%f %f", &base, &height);
    area = (base*height)/2;
    printf ("the area of the triangle is %.2f m^2", area);
    printf ("\nend of program execution");
    return 0;
}