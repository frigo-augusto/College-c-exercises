#include <stdio.h>
int main()
{
    printf ("program to calculate how many refuelings are needed in a speedway");
    int speedway, laps, consumption, refueling, totalm, totall, minkm;
    printf ("speedway laps, consumption and refuelings calcultaor\n");
    printf ("what is the lenght of the speedway?\n");
    scanf ("%d", &speedway);
    printf("how many laps will be completed?\n");
    scanf ("%d", &laps);
    printf("what is the consumption of the car in km/l?");
    scanf ("%d", &consumption);
    printf ("how many refuelings are wanted?");
    scanf ("%d", &refueling);
    totalm = laps * speedway;
    totall = (totalm / 1000)/ (consumption);
    minkm = totall  % refueling;
    if (totalm/1000 > consumption && minkm > 0)
    {
    printf ("is necessary go through %d km until refuel the first time", minkm);
    }
    else if (totalm/1000 > consumption)
        {
            printf ("0 km until the refuel");
        }
        else if (consumption * refueling < totalm/1000)
        {
            printf ("insufficient refuel");
        }
    else
    {
        printf ("refuelings are not necessary");
    }
    printf ("\nend of program execution");
    return 0;
}