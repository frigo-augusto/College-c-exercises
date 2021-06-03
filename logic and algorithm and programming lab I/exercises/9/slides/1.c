#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n1 = 1, count = 0, primo = 0;
    while (n1 != 0)
    {
        printf ("\ndigite um numero");
        scanf ("%d", &n1);
        for (int i = 2; i <= n1 - 1; i++)
        {
            if (n1 % i == 0)
            {
                count++;
                
            }
        }
        if (count == 0)
        {
            primo  += 1;
        }
    }
    primo = primo -1;
    printf ("\n%d", primo);

}