/*
4. Faça um programa que tenha uma função que desenhe um retângulo usando
os caracteres ‘+’ , ‘-’ e ‘| ‘. A função receberá a quantidade de linhas
(<24) e a quantidade de colunas (<79) para imprimir o retângulo na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int retangulo(int h, int c){
    int n;

    printf("+");
    for(n=0;n<c;n++){
        printf("-");
    }
    printf("+");
    printf("\n");
    for(n=0;n<h;n++){
        printf("|\n");
    }
    printf("+");
        for(n=0;n<c;n++){
        printf("-");
    }
    printf("+");

}

int main (){
    int altura, comprimento, i;

    printf("Desenhando um rentangulo\n");

    for(i=0;i<1;i++){
    printf("\nInforme a altura:");
    scanf("%i",&altura);
    fflush(stdin);
    if(altura < 0 || altura > 79){
        printf("\nInforme uma altura entre 0 e 79\n");
        printf("Tente novamente!\n");
        i--;
    }
    }

    for(i=0;i<1;i++){
    printf("\nInforme o comprimento:");
    scanf("%i",&comprimento);
    fflush(stdin);
    if(comprimento < 0 || comprimento > 24){
        printf("\nInforme um comprimento entre 0 e 24\n");
        printf("Tente novamente!\n");
        i--;
    }
    retangulo(altura,comprimento);
    }
    return 0;
}