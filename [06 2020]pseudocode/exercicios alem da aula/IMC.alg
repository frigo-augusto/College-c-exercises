algoritmo "IMC"
// Função :
// Autor :
// Data : 27/04/2020
// Seção de Declarações
var
massa, altura, IMC: Real
inicio
// Seção de Comandos
Escreval ("digite sua massa corporal")
leia (massa)
Escreval ("digite sua altura")
leia (altura)
IMC <- (massa)/(altura^2)
Escreval ("Seu IMC é ", IMC:5:2, "o ideal e estar entre 18 e 25")
se (IMC < 17) entao
   escreval ("abaixo do peso")
senao
   Se (IMC >=18.5) e (IMC <= 25) entao
      escreval("peso ideal")
   senao
        Se (IMC >= 25) e (IMC <= 29.9) ENTAO
           entao Escreval ("obesidade 1")
        senao
             Se (IMC > 30) e (IMC < 35) entao
                Escreval ("obesidade 2")
             senao
                  Se (IMC > 35) e (IMC < 40) entao
                     escreva ("obesidade 3")
                  senao
                       escreval ("obesidade morbida")
                  FimSe
             FimSe
        FimSe
   FimSe
fimse
fimalgoritmo
