#include <stdio.h>
#include <string.h>
int main()
{
    char profissao[50], str2[0], str1[0];
    int counter, aux;
    strcpy (str2, "a");
    for (counter = 0; counter <= 20; counter++)
    {
        printf ("digite uma profissao");
        scanf ("%s", &profissao);
        strcpy (str1, profissao[0]);
        aux = strcmp (str1, str2);
        if (aux == 0)
        {
            printf ("\n%s\n", profissao);
        }
    }
    system ("pause");
    return 0;
}