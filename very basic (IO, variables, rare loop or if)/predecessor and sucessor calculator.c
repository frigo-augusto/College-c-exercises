#include <stdio.h>
int main (){
    int num, pred, suc;
    printf ("predecessor and sucessor calculator");
    printf ("\n enter a number \n");
    scanf ("%d", &num);
    pred = num - 1;
    suc = num + 1;
    printf ("\nthe number, predecessor and sucessor are respectively %d %d %d", num, pred, suc); 
    printf ("\nend of program execution");
    return 0;
}