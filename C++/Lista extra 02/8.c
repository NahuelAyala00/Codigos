#include <stdio.h>

//Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.

int main(){
    int n1, n2, n3, aux;

    printf("Informe 3 valores inteiros\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);

    aux = n1; aux = n3; aux = n3;

    if (n3<n1>n2){
        printf("%i,%i,%i", n1,n2,n3);
    }
    if (n3>n1<n2){
        printf("%i,%i,%i", n3,n2,n1);
    }    
    if(n2>n1<n3){
        printf("%i,%i,%i", n3,n2,n1);
    }

    return 0;
}