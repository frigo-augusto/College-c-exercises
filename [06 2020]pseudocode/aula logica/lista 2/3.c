#include <stdio.h>
int main()
{
    int idade;
    printf ("coloque sua idade");
    scanf ("%d", &idade);
    if (idade > 18)
    {
        printf ("> 18")
    }
    else if (idade < 18)
    {
        printf ("< 18");
    }
    system ("pause");
    return 0;
}