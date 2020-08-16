#include <stdio.h>
#include <string.h>
int main()
{
    char sobremesa[20], principal[20], bebida[20];
    int total = 0;
    int auxv = 1, auxp = 1, auxf = 1, auxc = 1, auxmd = 1, auxmc = 1, auxs = 1, auxa = 1, auxrd = 1, auxcha = 1, auxslaranja = 1, auxsmelao = 1;
    int vegetariano = 180, peixe = 230, frango = 250 , carne = 350;
    int mousse_diet = 170, mousse_chocolate = 200, sorvete_diet = 110, abacaxi = 75;
    int refrigerante_diet = 65, cha = 20, suco_laranja = 70, suco_melao = 100;

    printf ("digite o prato principal, enter, sobremesa, enter, bebida, enter");
    scanf ("%s %s %s", &principal, &sobremesa, &bebida);
    auxv = strcmp(principal, "vegetariano");
    auxp = strcmp(principal, "peixe");
    auxf = strcmp(principal, "frango");
    auxc = strcmp(principal, "carne");
    auxmd = strcmp(sobremesa, "mousse_diet");
    auxmc = strcmp(sobremesa, "mousse_de_chocolate");
    auxs = strcmp(sobremesa, "sorvete_diet");
    auxa = strcmp(sobremesa, "abacaxi");
    auxrd = strcmp(bebida, "refrigerante_diet");
    auxcha = strcmp(bebida, "cha");
    auxslaranja = strcmp(bebida, "suco_de_laranja");
    auxsmelao = strcmp(bebida, "suco_de_melao");

    if (auxv == 0)
    {
        total+= vegetariano;
    }
    else if (auxp == 0)
    {
        total+= peixe;
    }
    else if (auxf == 0)
    {
        total+= frango;
    }
    else if (auxc == 0)
    {
        total += carne;
    }


    if (auxmd == 0)
    {
        total+= mousse_diet;
    }
    else if (auxmc == 0)
    {
        total += mousse_chocolate;
    }
    else if (auxs == 0)
    {
        total += sorvete_diet;
    }
    else if (auxa == 0)
    {
        total += abacaxi;
    }


    if (auxrd == 0)
    {
        total += refrigerante_diet;
    }
    else if (auxcha == 0)
    {
        total += cha;
    }
    else if (auxslaranja == 0)
    {
        total += suco_laranja;
    }
    else if (auxsmelao == 0)
    {
        total += suco_melao;
    }
    printf ("o total de calorias eh %d cal", total);
    return 0;
}