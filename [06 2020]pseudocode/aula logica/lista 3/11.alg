algoritmo "semnome"
// Função :
// Autor :
// Data : 7/20/2020
// Seção de Declarações 
var
numero, i: inteiro
primo: logico
inicio
// Seção de Comandos 
primo <- verdadeiro
escreval ("digite um numero para verificacao se e primo")
leia (numero)
para i de 2 ate (numero - 1) faca
     se numero % i = 0 ENTAO
        primo <- falso
     fimse
fimpara
se primo = verdadeiro ENTAO
     escreval ("eh primo")
senao
     escreval ("nao eh primo")
fimse
fimalgoritmo
