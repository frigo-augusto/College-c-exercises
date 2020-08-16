#include <stdio.h>
#include <string.h>
int main()
{
    int mes;
    int placa;
    int ultalg;
    printf ("informe o mes atual");
    scanf ("%d", &mes);
    printf ("informe o numero da placa do seu carro");
    scanf ("%d", &placa);
    ultalg = placa % 10;
    printf ("%d", ultalg);
    switch(ultalg)
    {
        case mes:
        printf ("vence no mes corrente");
        break;

        case 1:
        printf ("vence em janeiro");
        break;
        case 2:
        printf ("vence em fevereiro");
        break;
        case 3:
        printf ("vence em marco");
        break;
        case 4:
        printf ("vence em abril");
        break;
        case 5:
        printf ("vence em maio");
        break;
        case 6:
        printf ("vence em junho");
        break;
        case 7:
        printf ("vence em julho");
        break;
        case 8:
        printf ("vence em agosto");
        break;

        case 9:
        printf ("vence em setembro");
        break;
        case 10:
        printf ("vence em outubro");
        break;
        case 11:
        printf ("vence em novembro");
        break;
        case 12:
        printf ("vence em dezembro");
        break;
        default:
        printf ("valor invalido!");
        break;
    }
     
}