#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf ("digite os dois primeiros numeros da serie de ricci\n");
    scanf ("%d %d", &n1, &n2);
    printf ("\n %d \n %d", n1, n2);
    for (int i = 3; i <=10; i++)
    {
        n3 = n1 + n2;
        printf ("\n %d", n3);
        n1 = n2;
        n2 = n3;
    }
}