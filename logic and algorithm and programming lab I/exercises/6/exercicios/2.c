#include <stdio.h>
int main()
{
    int comeco, fim, duracao;
    printf ("digite as horas inicial e final do jogo");
    scanf ("%d %d", &comeco, &fim);
    if (comeco > fim)
    {
        duracao = comeco - fim;
    }
    else if (comeco == fim)
    {
        duracao = 24;
    }
    else if (comeco > 24 || comeco < 0 || fim > 24 || comeco < 0)
    {
        printf ("entrada invalida");
    }
    else 
    {
        duracao = fim - comeco;
    }
    printf ("%d", duracao);
    return 0;
}