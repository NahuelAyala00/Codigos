/*
7.Faça  um  programa que  peça  a  idade e  a  altura  de  5  pessoas, 
 armazene  cada informação no seu respectivo vetor. Imprima à idade e a 
 altura na ordem inversa a ordem lida.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade[5], i,u, altura[5];

    for(i=0;i<5;i++){
        printf("Informacoes da %i pessoa: \n",i+1);
        for(u=0;u<1;u++){
            printf("Informe sua idade: \n");
            scanf("%i",&idade[i]);
            fflush(stdin); 
            printf("Infome sua altura em cm: \n");
            scanf("%i",&altura[i]);
            fflush(stdin);
        
        }
    }
    printf("\nAs idades na ordem inversa: ");
    for(i=4;i>=0;i--){
        printf("%i,",idade[i]);
    }
        printf("\nAs alturas na ordem inversa: ");
    for(i=4;i>=0;i--){
        printf("%i,",altura[i]);
    }

    printf("\n\n");
    return 0;
}