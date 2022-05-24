#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1;
    int aux;

    printf("informe um numero:");
    scanf("%f", &n1);
    fflush(stdin);
    
    aux = n1;

    if(aux == n1){
        printf("%f e um numero inteiro",n1);
    }

    else{
        printf("%f e um numero irracional", n1);
    }



    return 0;
}