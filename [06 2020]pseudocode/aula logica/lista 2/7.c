#include <stdio.h>
int main()
{
    int aux, aux2;
    aux = 1;
    for (aux = 1; aux <= 10; aux++)
    {
        aux2 = aux * 5;
        printf ("\n%d * 5 = %d\n", aux, aux2);
    }
    system ("pause");
    return 0;
}