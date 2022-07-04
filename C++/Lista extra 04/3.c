/*
3. Faça um programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
	float numeros[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&numeros[i]);
		fflush(stdin);
	}
	
	for(i=9;i>=0;i--){
		printf("%f\n",numeros[i]);
	}
	
	return 0;
}