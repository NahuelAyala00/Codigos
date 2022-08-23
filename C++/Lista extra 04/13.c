/*
13. Faça um programa que leia 20 numeros e armazene-os num vetor. Armazene os
numeros pares num vetor PAR e os numeros IMPARES no vetor impar. Imprima os 3 vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
int i, par[20], impar[20], numero;

printf("Informe 20 numeros inteiros:\n");
    for(i=0;i<20;i++){
        printf("Numero %i:",i+1);
        scanf("%i",&numero);
        fflush(stdin);
     
        if(numero %2 == 0){
            par[i] = numero;
        }
        else{
            impar[i] = numero;
        }
        
       
    }
    printf("\nOs numeros sao:");
    for(i=0;i<20;i++){
        printf("%i, %i,",par[i], impar[i]);
    }    

    printf("\nOs numeros pares:");
    for(i=0;i<20;i++){
        printf("%i,",par[i]);
    }    

    printf("\nOs numeros impares:");
    for(i=0;i<20;i++){
        printf("%i,",impar[i]);
    }
    printf("\n\n");

    return 0;
}