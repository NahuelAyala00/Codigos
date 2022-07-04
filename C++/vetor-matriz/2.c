/*
2. Construa um algoritmo que leia um vetor de
 5 números reais e mostre a soma, 
multiplicação e os números.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
float n[5], soma=0, mult=1;
int i;

    for(i=0;i<5;i++){
        printf("Informe %i numero: ", i+1);
        scanf("%f",&n[i]);
        fflush(stdin);
    }
    for(i=0;i<5;i++){
        soma+=n[i];
    }
    for(i=0;i<5;i++){
        mult*=n[i];
    }

    printf("Os numeros sao: ");
        for(i=0;i<5;i++){
            printf("%.2f,",n[i]);
        }
    printf("\nA soma do numeros e: %.2f",soma);
    printf("\nA multiplicacao dos numeros e: %.2f",mult);
    return 0;
}