/*
Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e que 
a população do país B seja, aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%. Fazer um 
programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população 
do país B, mantidas essas taxas de crescimento.
A = 1,03*80000
B = 1,015*200000
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 80000, b=200000;
    int anos = 0;
while(a<=b){
    a = 1.03*a;
    b = 1.015*b;
 anos++;
}

printf("%i anos\n",anos);
    return 0;
}