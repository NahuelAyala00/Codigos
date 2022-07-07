/*
5. Faça um programa que tenha um menu de conversão de R$ para US$ e US$ para R$,
cada conversão devera ter uma função que receba o valor e retorne o valor convertido.
*/

#include <stdio.h>
#include <stdlib.h>

int DolarPraReal(float dolar);

int RealPraDolar(float real);

int main (){
    int converter, i;
    float DolarReal, RealDolar;

    do{
    printf("---------------------------\n");
    printf("|Menu de conversao U$<->R$|\n");
    printf("---------------------------\n");
    printf("|Digite 1 para U$->R$     |\n");
    printf("|Digite 2 para R$->U$     |\n");
    printf("---------------------------\n");
    printf("Digite:");
    scanf("%i",&converter);
    fflush(stdin);
    if(converter == 1){
        printf("Informe o quanto converter (U$->R$): ");
        scanf("%f",&DolarReal);
        fflush(stdin);
        DolarPraReal(DolarReal);
    }
    if(converter == 2){
        printf("Informe o quanto converter (R$->U$): ");
        scanf("%f",&RealDolar);
        fflush(stdin);
        RealPraDolar(RealDolar);
    }
    if(converter != 1 && converter != 2){
        printf("\nInforme um numero valido\n");
        printf("TEENTE NOVAMENTE!\n");
    }
    }while(converter != 1 && converter != 2);

    printf("\n");

    return 0;
}

int DolarPraReal(float dolar){
    float ResReal;

    ResReal =5.42*dolar;
    printf("\n%.2f Reais\n",ResReal);
}

int RealPraDolar(float real){
    float ResDolar;

    ResDolar =real/5.42;
    printf("\n%.2f Dolares\n",ResDolar);
}