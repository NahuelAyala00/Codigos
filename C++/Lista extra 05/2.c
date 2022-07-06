/*
2. Escreva uma função que receba como argumento o ano e retorne 1 se for ano 
bissexto ou 0 se não for um ano bissexto.
*/

#include <stdio.h>
#include <stdlib.h>

int bissexto(int n1){
    if(n1%4 == 0 && n1%100 != 0){
        printf("\n1\nBissexto\n");
    }
    else{
        printf("\n0\nNao e bissexto\n");
    }
}

int main (){
    int ano, i;

    for(i=0;i<1;i++){
    printf("\nInforme o seu ano de nascimento:");
    scanf("%i",&ano);
    fflush(stdin);
    if(ano < 0 || ano > 2022){
        printf("Informe um ano valido!Tente novamente\n");
        i--;
    }
    }
    bissexto(ano);

    printf("\n");
    return 0;
}