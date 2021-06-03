algoritmo "semnome"
// Função :
// Autor :
// Data : 7/20/2020
// Seção de Declarações 
var
armazenamento: vetor[1..10] de inteiro
i, comparacao: inteiro
inicio
// Seção de Comandos 

para i de 1 ate 10 faca
     escreval ("digite um numero")
     leia (armazenamento[i])
fimpara

comparacao <- 0
para i de 1 ate 10 faca
     se armazenamento[i] > comparacao ENTAO
        comparacao <- armazenamento[i]
     fimse
fimpara

escreval ("o maior numero e", comparacao)
fimalgoritmo
