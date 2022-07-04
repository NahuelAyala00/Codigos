/*
1. Construa um algoritmo que leia um vetor de
 10 números inteiros e mostre a soma dos 
 números.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
int numeros[10],i, soma=0;

for(i=0;i<10;i++){
    printf("Informe %i numero: ",i+1);
    scanf("%i",&numeros[i]);
    fflush(stdin);
}
for(i=0;i<10;i++){
    soma+=numeros[i];
}


printf("\nOs numeros sao: ");
for(i=0;i<10;i++){
    printf("%i,",numeros[i]);
}
printf("\nA soma dos numeros e %i",soma);


    return 0;
}