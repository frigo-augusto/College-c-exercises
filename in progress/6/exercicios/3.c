#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, base, altura, area;
    int xright = 0, xleft = 0, xin = 0, linex = 0, yup = 0, ydown = 0, yin = 0, liney = 0, retah = 0, retav = 0;;
    printf ("digite as coordenadas do primeiro ponto");
    scanf ("%d %d", &x1, &y1);
    printf ("digite as coordenadas do segundo ponto");
    scanf ("%d %d", &x2, &y2);
    if (x1 > x2)
    {
        base = x1 - x2;
    }
    else if (x2 > x1)
    {
        base = x2 - x1;
    }
    else if (x1 == x2)
    {
        retav = 1;
    }

    if (y1 > y2)
    {
        altura = y1 - y2;
    }
    else if (y2 > y1)
    {
        altura = y2 - y1;
    }
    else if (y1 == y2)
    {
        retah = 1;
    }
    
    if (x1 != x2 && y1 != y2)
    {
    area = base * altura;
    printf ("a area do retangulo eh %d", area);
    }
    else if (retah == 1 && retav == 1)
    {
        printf ("eh um ponto");

    }
    else if (retah == 1 && retav != 1)
    {
        printf ("reta horizontal");
    }
    else if (retav == 1 && retah != 1)
    {
        printf ("reta vertical");
    }



    printf ("digite as coordenadas do terceiro ponto");
    scanf ("%d %d", &x3, &y3);
    if (x3 > x2 && x3 > x1)
    {
        xright = 1;
    }
    else if ((x3 > x1 && x3 < x2) || (x3 < x1 && x3 > x2))
        {
            xin = 1;
        }
        else if (x3 == x1 || x3 == x2)
        {
            linex = 1;
        }
        else 
        {
            xleft = 1;
        }

    if (y3 > y2 && y3 > y1)
    {
        yup = 1;
    }
    else if ((y3 > y1 && y3 < y2) || (y3 < y1 && y3 > y2))
        {
            yin = 1;
        }
        else if (y3 == y1 || y3 == y2)
        {
            liney = 1;
        }
        else 
        {
            ydown = 1;
        }

        
        if (yup == 1 && xleft == 1)
        {
            printf ("acima e a esquerda");
        }
            else if (yup == 1 && xin == 1)
            {
                printf ("acima");
            }
                else if (yup == 1 && xright == 1)
                {
                    printf ("acima e a direita");
                }
                    else if (ydown == 1 && xleft == 1)
                    {
                        printf ("abaixo e a esquerda");
                    }
                        else if(ydown == 1 && xin == 1)
                        {
                            printf ("abaixo");
                        }
                            else if(ydown == 1 && xright ==1)
                            {
                                printf ("abaixo e a direita");
                            }
                                else if(yin == 1 && xleft ==1)
                                {
                                    printf ("a esquerda");
                                }
                                    else if (yin == 1 && xright ==1)
                                {
                                        printf ("a direita");
                                }
                                        else if (yin == 1 && xin == 1)
                                        {
                                            printf ("dentro do retangulo");
                                        }
                                            else if ((linex == 1 && (yin == 1 || liney == 1)) || (liney == 1 && (xin == 1 || linex == 1)))
                                            {
                                                printf ("na linha do retangulo");
                                            }
                                                else
                                                {
                                                    printf ("posicao invalida");
                                                }
}