#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1;

    printf("informe um numero:");
    scanf("%f", &n1);
    
    if(n1 >0){
        printf("%f e positivo", n1);
    }
        if(n1 < 0){
        printf("%f e negativo", n1);
    }
        if(n1 == 0){
        printf("%0.f e neutro", n1);
    }

    return 0;
}