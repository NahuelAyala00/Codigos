#include <stdio.h>
#include <stdlib.h>

int main (){
    float n1, n2;


    printf("Informe 2 numeros:");
    scanf("%f", &n1);
    scanf("%f", &n2);

    if(n1>n2){
        printf("%f e maior", n1);
    }
    
    if(n2>n1){
        printf("%f e maior", n2);
    }


    return 0;
}