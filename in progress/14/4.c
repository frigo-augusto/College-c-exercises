#include <stdio.h>
#include <string.h>
void print(char *number)
{
    printf ("%c", number[0]);
}

int main()
{
    char number[2];
    printf ("algorithm to print the hundred digit");
    printf ("enter the number");
    scanf ("%s", number);
    print (number);
}