algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 7/20/2020
// Se��o de Declara��es 
var
armazenamento: vetor[1..10] de inteiro
i, comparacao: inteiro
inicio
// Se��o de Comandos 

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
