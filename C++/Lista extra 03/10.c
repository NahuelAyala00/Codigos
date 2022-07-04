/*
Faça um programa que peça dois números inteiros (base e expoente), calcule e mostre o primeiro número elevado ao segundo número
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){

	int base, expoente, soma=0;
	
	printf("Digite a base: ");
	scanf("%i",&base);
	fflush(stdin);

	printf("Digite o expoente: ");
	scanf("%i",&expoente);
	fflush(stdin);
	
    soma = pow(base,expoente);
	
	printf("%i\n",soma);
	
	return 0;
}