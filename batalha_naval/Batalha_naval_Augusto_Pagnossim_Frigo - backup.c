#include <stdio.h>
#include <stdbool.h>

#define linhas 9
#define colunas 9

//Trabalho de lógica e algoritmo
//Nome: Augusto Pagnossim Frigo
//Turma:: CC2
//OBS: O CB mostra um erro, mas o programa executa normalmente se clicar em "continue". No VS code não há erro.
/*escolhi deixar a matriz principal como variável global para preenchê-la com uma função.
Por se tratar de um código pequeno, não fica confuso.
Utilizei a tabela ASCII para atribuir e comparar as letras, a fim de não precisar
incluir a string.h. Então, as comparações de igualdade com chars são funcionais.
Exemplo, considerando X[0][n], [0] é sua identificação entre os 3 X, X[0][0] guarda a coordenada X,
X[0][1] guarda a coordenada Y.*/

//declaração das variáveis globais
char matriz_principal[linhas][colunas];

//prototipagem das funções
int entrada(char letra_eixo, char letra_navio, int nav_totais, int nav_usados);
void ler_direcao(bool *left, bool *right, bool *up, bool *down);
bool preencher_matriz(int tam, int valx, int valy, char letra, bool *left, bool *right, bool *up, bool *down);
void imprimir_erro(void);
void imprimir_matriz(void);
void reiniciar_posicao(bool *left, bool *right, bool *up, bool *down);

//função main
int main(void)
{
    int i, j, X[3][2], Y[2][2], Z[1][2];
    bool erro = 0, left = 0, right = 0, up = 0, down = 0;

    //preenche a matriz com zeros
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz_principal[i][j] = 48;
        }
    }

    //introdução do programa ao usuário
    printf ("%s %s %s %s","\nPrograma para mostrar o tabuleiro de uma batalha naval.",
    "\nO tabuleiro e 9x9, sendo suas posicoes enumeradas de 0 a 8. Formado por 3 simbolos X(ocupa 2 espacos),",
    "2 simbolos Y(ocupa 3 espacos), e 3 simbolos Z (ocupa 4 espacos).",
    "\nCuidado: espacos conflitantes ou fora do campo da matriz serao desconsiderados.");
    imprimir_matriz();

    //Lê e preenche os navios X.
    for (i = 0; i < 3; i++)
    {
        X[i][0] = entrada(88, 88, 3, i);
        X[i][1] = entrada(89, 88, 3, i);
        ler_direcao(&left, &right, &up, &down);
        erro = preencher_matriz(2, X[i][0], X[i][1], 88, &left, &right, &up, &down);
        if (erro == 1)
        {
            i--;
        }
        imprimir_matriz();
        reiniciar_posicao(&left, &right, &up, &down);
    }

    //lê e preenche os navios Y.
    for (i = 0; i < 2; i++)
    {
        Y[i][0] = entrada(88, 89, 2, i);
        Y[i][1] = entrada(89, 89, 2, i);
        ler_direcao(&left, &right, &up, &down);
        erro = preencher_matriz(3, Y[i][0], Y[i][1], 89, &left, &right, &up, &down);
        if (erro == 1)
        {
            i--;
        }
        imprimir_matriz();
        reiniciar_posicao(&left, &right, &up, &down);
    }

    //lê e preenche os navios Z.
    for (i = 0; i < 1; i++)
    {
        Z[i][0] = entrada(88, 90, 1, i);
        Z[i][1] = entrada(89, 90, 1, i);
        ler_direcao(&left, &right, &up, &down);
        erro = preencher_matriz(4, Z[i][0], Z[i][1], 90, &left, &right, &up, &down);
        if (erro == 1)
        {
            i--;
        }
        imprimir_matriz();
        reiniciar_posicao(&left, &right, &up, &down);
    }

    printf ("Fim da execucao do programa. Digite qualquer caractere para encerrar.");
    scanf ("%d", &i);
    return 0;
}

//funcao entrada
int entrada(char letra_eixo, char letra_navio, int nav_totais, int nav_usados)
{
    int aux;
    printf ("\nEnvie a coordenada de 0 a 8 do eixo %c do navio %c. voce tem %d navio(s) do tipo restantes (considerando o atual) \n",letra_eixo, letra_navio, nav_totais - nav_usados);
    scanf ("%d", &aux);
    return aux;
}

//função ler direção
void ler_direcao(bool *left, bool *right, bool *up, bool *down)
{
    char posicao;
    printf("\nEnvie a posicao para que essa coordenada apontara. U = Up, D = down, L = left, R = right\n");
    scanf(" %c", &posicao);
    /*os numeros da comparacao sao as letras U, D, R, L em ASCII, com um operador lógico
    or para considerar letras maiúsculas e minúsculas. Não usei switch/case por causa dos operadores lógicos.*/
    //verifica qual o caracter digitado para determinar a direção do preenchimento da matriz.
    //As posições ficam no valor lógico zero por padrão e são reiniciadas a cada loop na main.
    if (posicao == 82 || posicao == 114)
    {
        *right = 1;
    }
    else
    {
        if (posicao == 76 || posicao == 108)
        {
            *left = 1;
        }
        else
        {
            if (posicao == 85 || posicao == 117)
            {
                *up = 1;
            }
            else
            {
                if (posicao == 68 || posicao == 100)
                {
                    *down = 1;
                }
            }
        }
    }
}

//função preencher matriz
bool preencher_matriz(int tam, int valx, int valy, char letra, bool *left, bool *right, bool *up, bool *down)
{
    //variavel que autoriza o preenchimento
    bool aut_for = 0;
    //verificação das condições de preenchimento
    if (*left == 1)
    {
        for (int j = 0; j < tam; j++)
        {
            if (matriz_principal[valx - j][valy] == 48 && valx - j >= 0 && valx - j <= 8 && valy >= 0 && valy <= 8)
            {
                //espaço disponivel
                aut_for = 1;
            }
            else
            {
                //erro ao preencher. Retorna 1 para a variavel erro
                aut_for = 0;
                imprimir_erro();
                return 1;
                break;
            }
        }

        if (aut_for == 1)
        {
            for (int j = 0; j < tam; j++)
            {
                matriz_principal[valx - j][valy] = letra;
            }
            return 0;
        }
    }
    else
    {
        if (*right == 1)
        {
            for (int j = 0; j < tam; j++)
            {
                if (matriz_principal[valx + j][valy] == 48 && valx + j >= 0 && valx + j <= 8 && valy >= 0 && valy <= 8)
                {
                    aut_for = 1;
                }
                else
                {
                    aut_for = 0;
                    imprimir_erro();
                    return 1;
                    break;
                }
            }

            if (aut_for == 1)
            {
                for (int j = 0; j < tam; j++)
                {
                    matriz_principal[valx + j][valy] = letra;
                }
                return 0;
            }
        }
        else
        {
            if (*up == 1)
            {
                for (int j = 0; j < tam; j++)
                {
                    if (matriz_principal[valx][valy - j] == 48 && valx >= 0 && valx<= 8 && valy - j >= 0 && valy - j <= 8)
                    {
                        aut_for = 1;
                    }
                    else
                    {
                        aut_for = 0;
                        imprimir_erro();
                        return 1;
                        break;
                    }
                }
                if (aut_for == 1)
                {
                    for (int j = 0; j < tam; j++)
                    {
                        matriz_principal[valx][valy - j] = letra;
                    }
                    return 0;
                }
            }
            else
            {
                if (*down == 1)
                {
                    for (int j = 0; j < tam; j++)
                    {
                        if (matriz_principal[valx][valy + j] == 48 && valx >= 0 && valx <= 8 && valy + j >= 0 && valy + j <= 8 )
                        {
                            aut_for = 1;
                        }
                        else
                        {
                            aut_for = 0;
                            imprimir_erro();
                            return 1;
                            break;
                        }
                    }
                    if (aut_for == 1)
                    {
                        for (int j = 0; j < tam; j++)
                        {
                            matriz_principal[valx][valy + j] = letra;
                        }
                        return 0;
                    }
                }
                else
                {
                    //este caso ocorre quando a letra para posição é inválida.
                    imprimir_erro();
                    return 1;
                }

            }
        }
    }
    aut_for = 0;
}

//função para imprimir erro em caso de preenchimento inadequado pelo usuário
void imprimir_erro(void)
{
    printf ("\nEntrada invalida ou o local indicado ja esta ocupado ou esta fora do escopo da matriz. Insira o navio novamente.\n");
}

//função que reinicia o valor das variáveis de posição, é chamada a cada loop na main.
void reiniciar_posicao(bool *left, bool *right, bool *up, bool *down)
{
    *left = 0;
    *right = 0;
    *up = 0;
    *down = 0;
}
//função que imprime a matriz, é chamada a cada loop na main.
void imprimir_matriz(void)
{
    printf ("\n   0   1   2   3   4   5   6   7   8\n -------------------------------------\n");
    for (int i = 0; i < linhas; i++)
    {
        printf ("%d|", i);
        for (int j = 0; j <colunas; j++)
        {
            printf (" %c  ", matriz_principal[j][i]);
        }
        printf ("|\n");
    }
    printf ("--------------------------------------\n");
}
