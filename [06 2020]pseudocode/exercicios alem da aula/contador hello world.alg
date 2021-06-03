algoritmo "contador"
var
salto, n1, n2: inteiro
inicio
Escreval ("Quero contar de")
leia (n1)
Escreval ("Quero contar ate")
leia (n2)
Escreval ("digite o valor do salto")
leia (salto)
se n1 > n2 entao
   enquanto (n1 <> n2) faca
            escreval (n1)
            n1 <- n1 - salto
   fimenquanto
senao
     enquanto (n2 <> n1) faca
              escreval (n1)
              n1 <- n1 + salto
     fimenquanto
fimse
fimalgoritmo
