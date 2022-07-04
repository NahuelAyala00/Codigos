/*
2. Faça um programa que leia um vetor de 5 números inteiros 
e mostre a soma, a multiplicação e os números.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){

	int numeros[5], i, soma=0, mult=1;
	
	for(i=0;i<5;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&numeros[i]);
		fflush(stdin);
	}
	
	for(i=0;i<5;i++){
		soma+=numeros[i];
	}
    for(i=0;i<5;i++){
        mult*=numeros[i];
    }
    printf("Os numeros sao: ");
    for(i=0;i<5;i++){
        printf("%i,", numeros[i]);
    }
    printf("\nSoma dos numeros = %i",soma);
    printf("\nMultiplicacao dos numeros = %i", mult);
    

    return 0;
}