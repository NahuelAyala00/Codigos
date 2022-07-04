/*
5. Faça um programa que leia um vetor de 10 caracteres, e 
diga quantas consoantes foram lidas. Imprima as consoantes.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	char v[10], c;
	int i, cont=0;
	
	// entrada
	for(i=0;i<10;i++){
		printf("Digite %i caracter: ", i+1);
		scanf("%c",&c);
		fflush(stdin);
		if(c>='a' && c<='z' || c>='A' && c<='Z'){
			v[i]=c;
		}else{
			printf("Erro! Caracter invalido.\n");
			i--;
		}
	}
	
	// processamento
	for(i=0;i<10;i++){
		if(v[i]!='a' && v[i]!='e' && v[i]!='i' && v[i]!='o' && v[i]!='u' 
		 && v[i]!='A' && v[i]!='E' && v[i]!='I' && v[i]!='O' &&  v[i]!='U'){
		 	cont++;
		 }
	}
	
	// saída
	printf("A quantidade de consoantes e %i\n",cont);
	printf("A consoantes lidas sao: ");
		for(i=0;i<10;i++){
		if(v[i]!='a' && v[i]!='e' && v[i]!='i' && v[i]!='o' && v[i]!='u' 
		 && v[i]!='A' && v[i]!='E' && v[i]!='I' && v[i]!='O' &&  v[i]!='U'){
		 	printf("%c, ",v[i]);
		 }
	}
	
	return 0;
}
