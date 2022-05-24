/*
8) Faça um programa que leia 3 valores inteiros e exiba-os em 
ordem crescente. 
R.:
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){

	int n1, n2, n3;

	printf("Digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);

	printf("Digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);

	printf("Digite n3: ");
	scanf("%i",&n3);
	fflush(stdin);

	int aux;
	if(n1>n2){
		aux=n1;
		n1=n2;
		n2=aux;
	}
	if(n1>n3){
		aux=n1;
		n1=n3;
		n3=aux;
	}
	if(n2>n3){
		aux=n2;
		n2=n3;
		n3=aux;
	}
	
	printf("%i, %i, %i\n",n1,n2,n3);
	return 0;    