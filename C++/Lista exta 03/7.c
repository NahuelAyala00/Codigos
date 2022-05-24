/*
Faça um programa que gere a tabuada de 
1 a 10 de qualquer número. O usuário deve
informar de qual número deseja ver a 
tabuada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1;
    int i;

    printf("Mostrar tabuada de qual numero?");
    scanf("%f",&n1);
    for(i=1;i<=10;i++){
        printf("%i X %f = %f\n",i,n1, i*n1);
    }


    return 0;
}