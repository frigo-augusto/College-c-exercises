#include <stdio.h>
int main()
{
    //this program have no real value out of brazil, so, the code will stay in PT-BR.
    int horas;
    float vphora, sbruto, IR, INSS, csindical, sliquido;
    printf ("digite o numero de horas trabalhadas em 1 mes");
    scanf ("%d", &horas);
    printf ("digite o valor que o trabalhador recebe por hora");
    scanf ("%f", &vphora);
    sbruto = (horas * vphora);
    IR = sbruto/100 * 11;
    INSS = sbruto/100 * 8;
    csindical = sbruto/100 * 5;
    sliquido = sbruto - IR - INSS - csindical;
    printf ("\n o salario bruto eh %.2f\n o salario liquido eh %.2f\n o ir eh %.2f\n o inss eh %.2f\n a csindical eh %.2f", sbruto, sliquido, IR, INSS, csindical);
    printf ("fim da execucao do programa");
    return 0; 

}