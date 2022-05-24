/*
Faça um programa que calcule e mostre a soma dos números pares entre 100 e 200 (inclusive).
O usuário deve ter a opção de repetir quantas vezes quiser esta operação.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma = 0;
    char repetir;
    do{
    for(i=100;i<=200;i++){
        if(i%2 == 0){
            soma+=i;
            printf("%i,",soma);
        }
    }
    printf("\nDeseja repetir o programa ? (s/n)");
    scanf("%c",repetir);
    fflush(stdin);
    }while(repetir == 's' || 'S');

 
    return 0;
}