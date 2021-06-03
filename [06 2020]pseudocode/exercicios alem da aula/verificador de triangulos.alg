algoritmo "semnome"
// Função :
// Autor :
// Data : 27/04/2020
// Seção de Declarações 
var
L1, L2, L3: inteiro
EQ, ES, TRI: logico
inicio
Escreval("digite 3 numeros")
leia(L1, L2, L3)
TRI <- (L1 < L2 + L3) e (L2 < L1 + L3) e (L3 < L1 + L2)
EQ <- (L1 = L2) e (L1 = L3)
ES <- (L1 <> L2) e (L1 <> L3) e (L2 <> L3)
Escreval ("e um triangulo?", TRI)
se (TRI = verdadeiro) entao
Escreval("o triangulo e escaleno", ES)
Escreval ("o triangulo e equilatero", EQ)
FimSe
fimalgoritmo
