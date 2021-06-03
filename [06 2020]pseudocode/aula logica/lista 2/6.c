#include <stdio.h>
#include <string.h>
int main()
{
    char nome[50], nome1[50];
    int control;
    printf ("digite dois nomes");
    scanf ("%s %s", &nome, &nome1);
    control = strcmp (nome, nome1);
    if (control > 0)
    {
        printf ("%s %s", nome, nome1);
    }
    else
    {
        printf ("%s %s", nome1, nome);
    }
    system ("pause");
    return 0;
}