#include <stdio.h>
#include <math.h>
int main()
{
    int chegada, saida;
    float tempo, minchegada, minsaida, preco;
    printf ("digite a hora de chegada, enter, minutos da chegada");
    scanf ("%d", &chegada);
    scanf("%f", &minchegada);
    printf ("digite a hora da saida, enter, minutos da saida");
    scanf ("%d", &saida);
    scanf ("%f", &minsaida);
    //se 1 min eh 1 + 2/3 em base 10
    minchegada = minchegada + minchegada * 2/3 * 0.01;
    minsaida = minsaida + minsaida * 2/3 * 0,01;
    tempo = ceil(minsaida - minchegada);
    if (tempo < 0)
    {
        tempo = tempo * -1;
    }
    else if (tempo == 0)
    {
        tempo = 24;
    }


    if (tempo <= 2)
    {
        preco = 1 * tempo;
    }
    else if (tempo > 2 && tempo < 4)
    {
        preco = 2 + 1,4*(tempo - 2);
    }
    else if (tempo > 4)
    {
        preco = 4,8 + 2*(tempo - 4);
    }
    printf ("%f", preco);
}