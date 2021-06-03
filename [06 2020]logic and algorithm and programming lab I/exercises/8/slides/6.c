#include <stdio.h>
int main()
{
    int n1, n2, n3;
    n1 = 0, n2 = 1;
    printf ("\n %d \n %d", n1, n2);
    for (int i = 3; i <=10; i++)
    {
        n3 = n1 + n2;
        printf ("\n %d", n3);
        n1 = n2;
        n2 = n3;
    }
}