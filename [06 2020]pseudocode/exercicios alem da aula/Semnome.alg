algoritmo "semnome"
// Função :
// Autor :
// Data : 24/04/2020
// Seção de Declarações 
var
vet: vetor [1..4] de inteiro
i, j, aux: inteiro

inicio
// Seção de Comandos
para i de 1 ate 4 faca
     escreva ("digite um valor")
     Leia (vet[i])
FimPara

Para i de 1 ate 3 faca
     Para j de i + 1 ate 4 faca
          se vet[i] > vet[j] entao
          aux <- vet[i]
          vet[i] <- vet[j]
          vet[j] <- aux
          Fimse
     FimPara
Fimpara
     
Para i de 1 ate 4 faca
     Escreva (vet[i])
     fimpara
fimalgoritmo
