#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

//declaracao de struct
struct no{
    struct no* prox;
    struct no *ant;
    char* palavra;
    int freq;
};
typedef struct no No;


struct dicionario{
    No* no_principal;
    int tamanho;
};

//prototipacao
void memoria_insuficiente();
int preenchido(Dicionario *dic, char* str);
void aloca_freq_string(Dicionario *dic, char* str);
int lista_vazia(Dicionario* dic);

//funcoes

Dicionario * criaDicionario(){
    Dicionario* dic = (Dicionario*) malloc(sizeof(Dicionario));
    if (dic == NULL){
        memoria_insuficiente();
    }
    dic->no_principal= NULL;
    //setar tamanho padrao pra 0 pra poder incrementar depois
    dic->tamanho = 0;
    return dic;
}


void removeDicionario(Dicionario * dic){
    if(dic->no_principal == NULL){
        printf ("dicionario vazio");
        exit(1);
    }
    No* dic1 = dic->no_principal;
    while (dic1 != NULL){
        No* temp = dic1->prox;
        free(dic1);
        dic1 = temp;
    }
    free(dic);
}


void adicionarEntrada(Dicionario * dic, char * str){
    int aut = 1;
        if (dic->no_principal != NULL){
        aut= preenchido(dic, str);
    }
    //aqui ele entra na funcao pra ver se a variavel ja existe, se nao existir ele entra no if
    if (aut){
        No* temp = (No*) malloc(sizeof(No));
        if (temp == NULL){
            memoria_insuficiente();
        }
        temp->palavra = str;
        temp->freq = 1;
        dic->tamanho += 1;
        temp->prox = NULL;
  
        // se a fila estiver vazia
        if (dic->no_principal == NULL) { 
            dic->no_principal = temp;
            dic->no_principal->prox = NULL;
            return; 
        }

        //fila ja tem elementos
        temp->prox = dic->no_principal;
        dic->no_principal->ant = temp;
        dic->no_principal = temp;
    }
}


int preenchido(Dicionario *dic, char* str){
    int i = 0;
    int i2 = 0;
    while (1){
        if (strcmp(str, dic->no_principal->palavra) == 0){
            dic->no_principal->freq += 1;
            while(i2 < i){
                //retorna ao ponto inicial
                dic->no_principal = dic->no_principal->ant;
                i2++;
            }
            return 0;
        }
        else{
            if (dic->no_principal->prox== NULL){
                break;
            }
            dic->no_principal = dic->no_principal->prox;
            i++;
        }
    }
    while(i2 < i){
        //retorna ao ponto inicial
        dic->no_principal = dic->no_principal->ant;
        i2++;
    }
    return 1;
}

void memoria_insuficiente(){
    printf("memoria insuficiente");
    exit(1);
}

Entrada** exportaEntradas(Dicionario *dic){
    int aux_ordenacao;
    char* aux_ordenacao2;
    int i = 0;
    //aloca o espaco pros elementos da variavel entrada
    Entrada** entrada = malloc((dic->tamanho + 1)*sizeof(Entrada*));
    for (i = 0; i < dic->tamanho ; i++){
        entrada[i] = (Entrada*) malloc(sizeof(Entrada*));
        if (entrada[i] == NULL){
            memoria_insuficiente();
        }
    }
    i = 0;
    No* aux = dic->no_principal;
    while (aux != NULL){
        //percorre e preenche o vetor usando o no auxiliar
        entrada[i]->freq = aux->freq;
        entrada[i]->str = aux->palavra;
        aux = aux->prox;
        i++;
    }
    //coloca o vetor em ordem decrescente de frequencia
    for (int i = 0; i < dic->tamanho; i++){
        for (int j = 0; j < dic->tamanho; j++){
            if (entrada[j]->freq < entrada[i]->freq){
                aux_ordenacao = entrada[i]->freq;
                aux_ordenacao2= entrada[i]->str;
                entrada[i]->freq = entrada[j]->freq;
                entrada[i]->str = entrada[j]->str;
                entrada[j]->freq = aux_ordenacao;
                entrada[j]->str = aux_ordenacao2;
            }
        }
    }
    //preenche com o \0 no final para verificar na hora do print
    entrada[dic->tamanho] = '\0';
    return entrada;
}
