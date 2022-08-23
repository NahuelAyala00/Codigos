/*
12.Faça  um  programa  que  leia  um  vetor  A  com  10  elementos,  
calcule  e  mostre  a soma dos quadrados dos elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    float A[10], soma=0;
    
    printf("Informe 10 numeros:\n");
    for(i=0;i<10;i++){
        printf("Numero %i: ",i+1);
        scanf("%f",A[i]);
        fflush(stdin);
    }

    for(i=0;i<10;i++){
        soma+=(A[i]*A[i]);
    }
    
    printf("\n A soma dos quadrados dos numeros:");
    for(i=0;i<10;i++){
        printf("%f",soma);
    }

    printf("\n\n");


    return 0;
}