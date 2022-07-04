/*
4. Faça um programa que leia 4 notas, mostre as notas e a média na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){

    int i;
    float media=0, notas[4];

    for(i=0;i<4;i++){
    
        printf("Informe %i nota: ",i+1);
        scanf("%f",&notas[i]);
        fflush(stdin);
        
        if(notas[i] < 0 && notas[i] > 10){
            printf("Erro! Informe um numero valido!\n");
            i--;
        }
        
    }

    for(i=0;i<4;i++){
        media+=notas[i];
    }

    printf("Essas foram as notas: ");
    for(i=0;i<4;i++){
        printf("%.2f,",notas[i]);
    }
    printf("A sua media foi de: %.2f",media/4);

    return 0;
}