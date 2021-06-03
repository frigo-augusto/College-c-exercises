#include <stdio.h>
#include <math.h>
int proc5(n)
{
    int multiples;
    if (n % 5 == 0 )
    {
        multiples = n/5;
    }
    else
    {
        multiples = n/5 - 1;
    }
    return multiples;
}

int procdistance(x1,x2,y1,y2)
{
    int distance;
    
    distance = (sqrt(pow((x1 - x2),2) + pow((y1 - y2),2)));
    return distance;


}


void print(character)
{
    for (int i = 0; i < 50; i++)
    {
        printf ("\n %d", character);
    }
}


int main()
{
    int code, n, multiples, x1, x2, y1, y2, distance, character;
    printf ("\nenter the number that you want \n 1- enter n and show the number of multiples of 5 until n \n 2- enter two points and show the distance between them \n 3 - enter a character and print him 50x");
    scanf ("%d", &code);
    switch (code)
    {
    case 1:
        printf ("enter the n");
        scanf ("%d", &n);
        multiples = proc5(n);
        printf ("the number of multiples is %d", multiples);
        break;
    
    case 2:
        printf ("enter the 4 coordinates (x1, y1, x2,y2)");
        scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
        distance = procdistance(x1,x2,y1,y2);
        printf ("the distance between the points is %d", distance);
        break;

    case 3:
        printf ("enter the character");
        scanf ("%d", &character);
        print(character);
        break;

    default:
        printf ("invalid number");
        break;
    }
}