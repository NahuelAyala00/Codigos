/*
3. Faça um programa que leia dez números inteiros e calcule a 
diferença entre o maior e o menor número do conjunto.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int numeros, menor, maior, i;
	
	for(i=1;i<=10;i++){
		printf("Digite %i numero: ",i);
		scanf("%i",&numeros);
		fflush(stdin);
		
		if(i==1){
			menor = numeros;
			maior = numeros;
		}else{
			if(menor>numeros){
				menor=numeros;
			}
			if(maior<numeros){
				maior=numeros;
			}
		}
	}
	
	int r = maior - menor;
	
	printf("A diferenca e %i\n",r);
	
	return 0;
}
