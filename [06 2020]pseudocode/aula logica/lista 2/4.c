#include <stdio.h>
int main()
{
    int anonasc, anoat;
    printf ("digite seu ano de nascimento e o ano atual");
    scanf ("%d %d", &anonasc, &anoat);
    if (anonasc > 1900 && anonasc < anoat)
    {
        printf ("voce tem %d anos", anoat - anonasc);
    }
    else
    {
        printf ("ano invalido");
    }
    system ("pause");
    return 0;
}