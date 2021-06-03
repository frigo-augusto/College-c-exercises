#include <stdio.h>
#include <stdbool.h>
int main()
{
    int dia, mes, ano;
    bool controle = 0, abissexto = 0, mes31 = 0;
    printf ("\ndigite os dias, mes e ano do seu aniversario \n");
    scanf ("%d %d %d", &dia, &mes, &ano);
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        mes31 = 1;
    }

    if (ano % 400 == 0 || (ano %4 == 0 && ano %100 != 0))
    {
        abissexto = 1;
    }
    if (dia == 29 && abissexto == 0 && mes == 2)
    {
        controle = 1;
    }
    if (mes31 == 0 && dia > 30 && dia < 1)
    {
        controle = 1;
    }
    if (mes31 == 1 && dia >31 && dia < 1)
    {
        controle = 1;
    }
    if (mes > 12 || mes < 1 || dia <1 || dia > 31 || ano >2020 || ano < 1900)
    {
        controle = 1;
    }
    if (controle == 1)
    {
        printf ("entrada invalida!");
    }
    else 
    {
        printf ("data correta!");
    }
}