/*
1. Faça um programa que leia um vetor de 5 números inteiros e mostre-os.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeros[5], i, soma=0;

    for(i=0;i<5;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%i",&numeros[i]);
        fflush(stdin);
    }

    printf("Os numeros sao: ");
    for(i=0;i<5;i++){
        printf("%i,",numeros[i]);
    }

    return 0;
}