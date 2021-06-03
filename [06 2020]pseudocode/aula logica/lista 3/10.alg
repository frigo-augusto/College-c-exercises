algoritmo "semnome"
// Função :
// Autor :
// Data : 7/20/2020
// Seção de Declarações
var
numero: vetor [1..10] de inteiro
i, controle, controle2: inteiro
inicio

para i de 1 ate 10 faca
     escreval ("digite 10 valores")
     leia (numero[i])
fimpara

controle <- 99999
controle2 <- 99999
para i de 1 ate 10 faca
     se (numero[i] < controle) e (numero[i] < controle2) ENTAO
        controle <- numero[i]
     fimse
fimpara

para i de 1 ate 10 faca
     se (numero[i] <> controle) e (numero[i] < controle2) ENTAO
        controle2 <- numero[i]
     fimse
fimpara
escreval ("os dois menores numeros sao", controle, controle2)

fimalgoritmo
