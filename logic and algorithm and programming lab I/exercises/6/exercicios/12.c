#include <stdio.h>
int main()
{
    int mesant, mesat;
    float total = 0;
    printf ("digite as marcacoes do hidrometro do mes anterior e atual, em metros cubicos");
    scanf ("%d %d", &mesant, &mesat);
    if (mesant > 25)
    {
        total+= (mesant - 25)* 1.60;
        total +=10 * 0.69 + 6*1.17 + 10* 1.48;
    }
    else if (mesant <= 25 && mesant >= 16)
    {
        total +=10 * 0.69 + 6*1.17 + (mesant - 15)* 1.48;
    }
    else if (mesant >= 11 && mesant <= 15)
    {
        total +=10 * 0.69 + (mesant - 10)*1.17;
    }
    else if (mesant >=0 && mesant <= 10)
    {
        total = mesant * 0.69;
    }


     if (mesat > 25)
    {
        total+= (mesat - 25)* 1,60;
        total +=10 * 0.69 + 6*1.17 + 10* 1.48;
    }
    else if (mesat <= 25 && mesat >= 16)
    {
        total +=10 * 0.69 + 6*1.17 + (mesant - 15)* 1.48;
    }
    else if (mesat >= 11 && mesat <= 15)
    {
        total +=10 * 0.69 + (mesat - 10)*1.17;
    }
    else if (mesat >=0 && mesat <= 10)
    {
        total += mesat * 0.69;
    }

    total = total + 10 + 0.025*total;
    printf ("sua conta eh de %.2f reais", total);
}