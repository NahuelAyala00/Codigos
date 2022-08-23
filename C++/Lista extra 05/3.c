/*
3. Faça uma função que desenhe linhas de caracteres na tela, a função receberá 
como argumento o tipo de caractere e o número de linhas que deverá imprimir.
*/

#include <stdio.h>
#include <stdlib.h>

int desenho (char letra, int linhas);

int main (){
    char c;
    int linha;

    printf("Informe um caracter: ");
    scanf("%c",&c);
    fflush(stdin);
    printf("Informe o numero de linhas:");
    scanf("%i",&linha);
    fflush(stdin);

    printf("\n");

    desenho(c,linha);

    printf("\n\n");

    return 0;
}

int desenho (char letra, int linhas){
    int i,linha;
    for(i=0;i<linhas;i++){
        printf("%c",letra);
    }
}