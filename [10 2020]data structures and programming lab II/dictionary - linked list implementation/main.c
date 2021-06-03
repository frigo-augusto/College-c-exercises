#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

//Trabalho de estrutura de dados
//Nome: Augusto Pagnossim Frigo
//Matricula: 202010869
void memoriaInsuficiente();
void printa(Entrada** entra);
Entrada ** teste(Dicionario *dic, char * str, int grao);
void libera_entrada(Entrada** entra);

int main(){
    Dicionario* dic = criaDicionario();
    Entrada** entra = teste(dic, "palavra", 2);
    removeDicionario(dic);
    printa(entra);
    libera_entrada(entra);
    return 0;
}

void memoriaInsuficiente(){
    //Obs: repeti essa funcao porque nao sabia se podia exportar alguma coisa alem daquelas permitidas.
    printf("memoria insuficiente");
    exit(1);
}


void printa(Entrada** entra){
    for (int j = 0; entra[j] != '\0' ; j++){
        printf ("------------------------------\n");
        printf("String: %s\t", entra[j]->str);
        printf ("Frequencia: \t%d \n", entra[j]->freq);
    }
}


Entrada ** teste(Dicionario *dic, char * str, int grao){
    //malloc geral
    char** auxiliar = (char**) malloc ((strlen(str) - grao + 1) * sizeof(char*));
    if(auxiliar == NULL){
        memoriaInsuficiente();
    }

    //malloc de cada elemento
    for(int i = 0; i < strlen(str) - grao + 1; i++){
        auxiliar[i] = (char*) malloc((strlen(str)+1)*sizeof(char));
        if (auxiliar[i] == NULL){
            memoriaInsuficiente();
        }
    }
    
    //chama funcao pra adicionar os fragmentos de palavras
    for (int i = 0; i < strlen(str) - grao + 1 ; i++){
        for (int j = 0; j < grao; j++){
            auxiliar[i][j] = str[i+j];
        }
        auxiliar[i][grao] = '\0';
        adicionarEntrada(dic, auxiliar[i]);
    }

    return exportaEntradas(dic);
}


void libera_entrada(Entrada** entra){
    int i = 0;
    for(int i = 0; i != '\0'; i++){
        free(entra[i]);
    }
    free(entra);
}