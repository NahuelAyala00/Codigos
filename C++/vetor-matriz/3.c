/*
3. Construa um algoritmo que leia um vetor de
 10 números reais e mostre-os na
ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float n[10];
    int i;

    for(i=0;i<10;i++){
        printf("Informe %i numero: ",i+1);
        scanf("%f",&n[i]);
        fflush(stdin);
    }
    printf("\nOs numeros sao: ");
    for(i=9;i>0;i--){
        printf("%.2f,",n[i]);
    }

    return 0;
}
