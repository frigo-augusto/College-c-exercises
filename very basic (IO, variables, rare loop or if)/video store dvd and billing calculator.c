#include <stdio.h>
int main()
{
    int dvds;
    float rent, fine, anual_billing, total_dvds;
    printf ("video store dvd and billing calculator");
    //this program considers the video store accquiring 10% of new dvds in a year and losing 2% of them.
    printf ("enter the number of dvds and the price of the rent\n");
    scanf ("%d %f", &dvds, &rent);
    fine = (0.33 * 0.1 * rent * dvds);
    anual_billing = (0.33 * rent * 12 + (fine * 12));
    total_dvds = (dvds + dvds * 0.1 - dvds * 0.02);
    printf ("\nthe video store will have %.2f dvds, %.2f of billing in mensal fines and %.2f of anual billing", total_dvds, fine, anual_billing);
    printf ("\nend of program execution");
    return 0;
}