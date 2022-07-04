/*
Faça um programa que mostre a soma desta serie S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numerador = -1, denominador;
    float resposta = 0;

    for(denominador = 1; denominador <= 50; denominador++){
        numerador = numerador + 2;
        resposta= resposta +(numerador/denominador);
    }
    printf("%f",resposta);
    return 0;
}