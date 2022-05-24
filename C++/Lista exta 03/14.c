/*
Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares, 
a quantidade de números impares e a soma de todos os números.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, pares = 0, impares = 0, numeros, soma = 0;

    printf("Informe 10 numeros inteiros:\n");
    for(i=1;i<=10;i++)
    {
        printf("numero %i:",i);
        scanf("%i", &numeros);
        fflush(stdin);
        if(numeros%2 == 0){
            pares = pares +1;
        }else{
            impares = impares + 1;
        }
        soma+= numeros;
    }
    printf("existem %i pares\n", pares);
    printf("existem %i impares\n",impares);
    printf("A soma de todos os numeros = %i\n",soma);

    return 0;
}