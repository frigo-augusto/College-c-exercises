algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 7/20/2020
// Se��o de Declara��es 
var
numero: vetor [0..14] de real
raiz: vetor [0..14] de real
i: inteiro
inicio
para i de 0 ate 14 faca
     escreval ("digite um numero")
     leia (numero[i])
fimpara
para i de 0 ate 14 faca
     raiz[i] <- RaizQ(numero[i])
     escreval(raiz[i])
fimpara
fimalgoritmo
