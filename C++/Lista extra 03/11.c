/*
Faça um programa que mostre a soma desta serie
S= 1/1 + 2/3 + 3/5+ 4/7 + 5/9 +..+ 10/19.
(numerador/denominador)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int denominador = -1, numerador;
    float resposta = 0;
    
    for(numerador = 1; numerador <= 10; numerador++){
        denominador = denominador + 2;
        resposta = resposta + (numerador/denominador);
    }
    printf("%f",resposta);

    return 0;
}