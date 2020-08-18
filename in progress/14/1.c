#include <stdio.h>
#include <stdbool.h>
void order(n1, n2, n3)
{
    int x[3];
    x[1] = n1;
    x[2] = n2;
    x[3] = n3;
    int aux;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = i + 1; j <= 3; j++)
        {
            if (x[i] > x[j])
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        printf ("%d", x[i]);
    }
    
}
int main()
{
    int n1, n2, n3;
    printf ("enter 3 numbers");
    scanf ("%d %d %d", &n1, &n2, &n3);
    order(n1,n2,n3);
    system ("pause");
}