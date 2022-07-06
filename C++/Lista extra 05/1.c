/*
1. Faça um programa que leia um número, passe este número como parâmetro para 
uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
*/

#include <stdio.h>
#include <stdlib.h>

int resto(int v1){
    
    if(v1 % 2 ==0){
        printf("0\nPar \n");
    }
    else{
        printf("1\nImpar \n");
    }
}

int main (){
    int n1, resultado;

    printf("Informe um numero inteiro: ");
    scanf("%i",&n1);
    fflush(stdin);

    resto(n1);

    printf("\n");


    return 0;
}
