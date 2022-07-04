/*
Faça um programa que mostre a soma desta serie S = (37*38)/1 + (36*37)/2 + (35*36)/3 + ... + (1*2)/37
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numerador, denominador, x = 0, y = 1;
    float resposta = 0;

    for(denominador = 37; denominador >= 1; denominador--){
        x=x+1;
        y=y+1;
        numerador = x*y;
        resposta= resposta +(numerador/denominador);
    }
    printf("%.2f",resposta);
    return 0;
}