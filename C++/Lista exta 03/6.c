/*
Faça um programa que calcule o valor total 
investido e o custo médio por CD. O usuário
deverá informar a quantidade de CDs e o 
valor para em cada um.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
int qtd_cds, i;
float valor_cds, soma = 0, media;

printf("Informe quantos CD's foram comprados:");
scanf("%i", &qtd_cds);
fflush(stdin);
for(i=1;i<=qtd_cds;i++){
    printf("Valor do %i CD:", i);
    scanf("%f", &valor_cds);
    fflush(stdin);
    soma+=valor_cds;
}

media = (valor_cds)/qtd_cds;

printf("O custo medio por CD foi de %.2f", media);


return 0;}
