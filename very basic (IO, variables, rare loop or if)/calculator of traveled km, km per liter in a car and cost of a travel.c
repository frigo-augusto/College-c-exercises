#include <stdio.h>
int main ()
{
    float traveled_km, final_km, inicial_km, km_p_liter, fuel_spent, cost, price;
    printf ("calculator of traveled km, km/l in a car and cost of a travel\n");
    printf ("enter the inicial number of km, the final number, the fuel spent and the price of the fuel\n");
    scanf ("%f %f %f %f", &final_km, &inicial_km, &fuel_spent, &price);
    traveled_km = final_km - inicial_km;
    km_p_liter = traveled_km /fuel_spent;
    cost = price * traveled_km;
    printf ("\nyou traveled %f km, your car does %f km /liter, the cost of the travel was %f\n", traveled_km, km_p_liter, cost);
    printf ("\nend of program execution");
    return 0;
}