algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 7/20/2020
// Se��o de Declara��es 
var
tabela: vetor[1..20, 1..3] de inteiro
i, j, vtemp: inteiro
inicio
// Se��o de Comandos 

para i de 1 ate 20 faca
     para j de 1 ate 3 faca
          escreval ("digite 1 caso esta parte da matriz esteja marcada")
          leia (vtemp)
          se (vtemp = 1) entao
             tabela[i,j] <- 1
          fimse
     fimpara
fimpara

para i de 1 ate 20 faca
     escreval (" ")
     para j de 1 ate 3 faca
          escreva (tabela[i,j])
     fimpara
fimpara
fimalgoritmo
