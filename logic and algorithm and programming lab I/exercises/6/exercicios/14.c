#include <stdio.h>
int main()
{
    float valor, pfinal;
    int parcelas;
    printf ("digite o valor do produto");
    scanf ("%f", &valor);
    printf ("digite em quantas parcelas voce pagara");
    scanf ("%d", &parcelas);
    if (parcelas <=3)
    {
        pfinal = valor;
    }
    else if ( parcelas >=3 && parcelas <= 7)
    {
        pfinal = valor + valor*0.005;
    }
    else if (parcelas >= 8 && parcelas >=12)
    {
        pfinal = valor + valor * 0.015;
    }
    else if (parcelas >= 13 && parcelas <= 20)
    {
        pfinal = valor + valor * 0.025;
    }
    printf ("o preco final eh%.2f", pfinal);
    return 0;
}