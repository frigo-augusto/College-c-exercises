#include <stdio.h>
int main (){
float price, discount, increase;
    //this program considers discount of 10% or increase of 5%
    printf ("calculator of the price of a product with discount or incrase");
    printf ("enter the price of the product");
    scanf ("%f", &price);
    discount = price - (price/10);
    increase = price + (price/5);
    printf ("\nthe price with discount is %f \n the price with incrase is %f \n", discount, increase);
    printf ("\n end of program execution");
    return 0;
}