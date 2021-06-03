#include <stdio.h>
#include <string.h>
int main ()
{
    char a[2], b[2], c[2], estado[2];
    strcpy (a, "rs");
    strcpy (b, "sp");
    strcpy (c, "rj");
    printf ("digite a sigla do seu estado");
    scanf ("%c", &estado);
    if (strcmp (estado, a == 0))
    {
        printf ("gaucho");
    }
    else if (strcmp (estado, b == 0))
    {
        printf ("sem pulmao");
    }
    else if (strcmp (estado, c == 0))
    {
        printf ("ketchup na pizza");
    }
    system ("pause");
    return 0; 
}